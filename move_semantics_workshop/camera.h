#ifndef CAMERA_H
#define CAMERA_H

#include "memory_card.h"

class Camera {
    private:
        MemoryCard *m;
    public:
        Camera(MemoryCard *m) : m(m) {}
        Camera(const Camera&) = delete; 
        Camera(Camera&& other) noexcept;
        Camera& operator=(const Camera&) = delete;
        Camera& operator=(Camera&& other) noexcept;
        ~Camera();

        void take_picture();
        void replace(MemoryCard *);
};

#endif // CAMERA_H