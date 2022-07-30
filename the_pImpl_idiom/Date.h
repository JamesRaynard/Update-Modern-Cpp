#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
	int day;
	int month;
	int year;
  public:
	Date(int day, int month, int year) : day(day), month(month), year(year) {}
	void set_day(int d) { day = d; }
	void print() { std::cout << day << "/" << month << "/" << year; }
};

#endif //DATE_H