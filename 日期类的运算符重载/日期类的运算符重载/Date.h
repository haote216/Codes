#pragma once
#include<iostream>

using namespace std;
class Date
{
public:
	int GetMonthDay(int year, int month);
	void Print(const Date& d);
	Date(int year = 1900, int month = 1, int day = 1);
	//Date(const Date& d);
	//~Date();
	Date& operator=(const Date& d);
	bool operator>(const Date& d);
	bool operator<(const Date& d);
	bool operator>=(const Date& d);
	bool operator<=(const Date& d);
	bool operator==(const Date& d);
	bool operator!=(const Date& d);
	Date operator+(int day);
	Date& operator+=(int day);
	Date operator-(int day);
	Date& operator-=(int day);
	int operator-(const Date& d);
	Date operator++();     // ++d  => d.operator++(&d)
	Date operator++(int);  // d++  => d.operator++(&d,0)
	Date operator--();     // --d  => d.operator--(&d)
	Date operator--(int);  // d--  => d.operator--(&d,0)

	
private:
	int _year;
	int _month;
	int _day;
};