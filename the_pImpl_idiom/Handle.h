#ifndef HANDLE_H
#define HANDLE_H

#include <memory>

class Date;

class Handle {
	std::unique_ptr<Date> body;
  public:
	Handle(int day, int month, int year);
	~Handle();
	Handle(Handle&&) noexcept;
	Handle& operator=(Handle&&) noexcept;
	void set_day(int day);
	void print();
};

#endif //HANDLE_H