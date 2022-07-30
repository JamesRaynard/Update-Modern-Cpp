#include <thread>
#include <vector>
#include <mutex>

int x{0};
std::mutex m;

void func() {
    std::lock_guard<std::mutex> lg(m);
    while (x == 0)
        x = 1 - x;
}

int main() {
    std::vector<std::thread> threads;
    for (int i=0; i < 10000; ++i)
        threads.push_back(std::thread(func));
    for (auto& t: threads)
        t.join();
}
