#include "camera.h"
#include "memory_card.h"

#include <iostream>

void Camera::take_picture() { m->store(); }

void Camera::replace(MemoryCard *mc) { std::swap(m, mc);  delete mc; }

Camera::Camera(Camera&& other) noexcept {  std::swap(m, other.m); other.m = nullptr; }
		
Camera& Camera::operator=(Camera&& other) noexcept {
        std::swap(m, other.m);
        other.m = nullptr;
        return *this;
}

Camera::~Camera() { delete m; }
