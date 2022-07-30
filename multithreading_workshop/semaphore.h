#include <mutex>
#include <condition_variable>

class Semaphore {
private:
    std::mutex mtx;
    std::condition_variable cv;
    int count;
public:
    Semaphore(int count = 0) : count(count) {}

    void put() {
        std::lock_guard<std::mutex> lock(mtx);
        ++count;
        cv.notify_one();
    }

    void take() {
        std::unique_lock<std::mutex> lock(mtx);

        while (count == 0){
            cv.wait(lock);
        }
        --count;
    }
};