#include "Handle.h"
#include "Date.h"

// Implemented using RAII
Handle::Handle(int day, int month, int year) {
    body = std::make_unique<Date>(day, month, year);	// Allocate in constructor
}

Handle::~Handle() = default;
Handle::Handle(Handle&&) noexcept = default;
Handle& Handle::operator=(Handle&&) noexcept = default;

void Handle::set_day(int day) {
	body->set_day(day);
}

void Handle::print() {
	body->print();
}
