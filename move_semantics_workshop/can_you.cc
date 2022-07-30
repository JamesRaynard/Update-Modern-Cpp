#include <thread>
#include <iostream>

class thread_guard {
    std::thread t;
public:
	explicit thread_guard() = default;                          // Not required, but may be useful
    explicit thread_guard(std::thread&& t) : t(std::move(t)) {} // explicit constructor prevents conversions

    ~thread_guard() {
        if (t.joinable()) t.join();                   // Join thread if not already joined
    }

    thread_guard(const thread_guard&) = delete;       // Deleted copy operators prevent copying
    thread_guard& operator=(const thread_guard&) = delete; 
	thread_guard(thread_guard&&) noexcept = default;       // Default move operators to allow moving
    thread_guard& operator=(thread_guard&&) noexcept = default;
};

int main() {
	std::thread t;
	thread_guard tg{std::move(t)};                    // Compiles
	thread_guard tg2;                                 // Compiles
	// tg2 = tg;                                      // Does not compile
	// thread_guard tg3(tg);                          // Does not compile
	thread_guard tg4(std::move(tg));                  // Compiles
	std::thread t2;
	thread_guard tg5 = thread_guard(std::move(t2));   // Compiles
}