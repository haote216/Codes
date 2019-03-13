#include"Date.h"

int Date::GetMonthDay(int year, int month)
{
	static const int monthDay[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//每次进来都要创建，加上static放到静态区
	if ((month == 2) && (year % 4 == 0 && year % 100 != 0 )|| (year % 400 == 0))
	{
		return 29;
	}
	return monthDay[month];
}
void Date::Print(const Date& d)
{
	cout << d._year << "-" << d._month << "-" << d._day << endl;
}

Date::Date(int year, int month, int day)
{
	if (year >= 0
		&& month > 0 && month < 13
		&& day > 0 && day <= GetMonthDay(year, month))
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
	{
		//assert(false);
		cout << "Date invalid" << endl;
	}
	
}
Date& Date::operator=(const Date& d)
{
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	return *this;
}
bool Date::operator>(const Date& d)
{
	if (_year > d._year)
	{
		return true;
	}
	else if (_year == d._year)
	{
		if (_month > d._month)
		{
			return true;
		}
		else if (_month == d._month)
		{
			if (_day > d._day)
			{
				return true;
			}
		}
	}
	return false;
}
bool Date::operator<(const Date& d)
{
	return !(*this >= d);
}
bool Date::operator>=(const Date& d)
{
	return *this > d || *this == d;
}
bool Date::operator<=(const Date& d)
{
	return !(*this > d);
}
bool Date::operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}
bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}
//d1 + 100
Date Date::operator+(int day)
{
	Date ret(*this);//用ret拷贝构造了d1
	ret._day += day;
	while (ret._day > GetMonthDay(ret._year, ret._month))
	{
		ret._day -= GetMonthDay(ret._year, ret._month);
		ret._month++;
		if (ret._month > 13)
		{
			ret._year += 1;
			ret._month = 1;
		}
	}
	return ret;
}
Date& Date::operator+=(int day)
{
	this->_day += day;
	while (this->_day > GetMonthDay(this->_year, this->_month))
	{
		this->_day -= GetMonthDay(this->_year, this->_month);
		this->_month++;
		if (this->_month > 13)
		{
			this->_year += 1;
			this->_month = 1;
		}
	}
	return *this;
}
Date Date::operator-(int day)
{
	Date ret = *this;
	ret._day -= day;   
	while (ret._day < 0)
	{
		if (ret._month == 1)
		{
			ret._year -= 1;
			ret._month = 12;
		}
		else
		{
			ret._month--;
		}
		ret._day += GetMonthDay(ret._year, ret._month);
	}
	return ret;
}
Date& Date::operator-=(int day)
{
	this->_day -= day;
	while (this->_day < 0)
	{
		if (this->_month == 1)
		{
			this->_year -= 1;
			this->_month = 12;
		}
		else
		{
			this->_month--;
		}
		this->_day += GetMonthDay(this->_year, this->_month);
	}
	return *this;
}
int Date::operator-(const Date& d)
{
	Date tmp1 = (*this);
	Date tmp2 = d;
	int count = 0;
	if (tmp1 < tmp2)
	{
		Date tmp;
		tmp = tmp2;
		tmp2 = tmp1;
		tmp1 = tmp;
	}
	while (tmp1 != tmp2)
	{
		tmp2++;
		count++;
	}
	return count;
}
Date Date::operator++()  //后置++
{
	Date ret(*this);
	*this += 1;
	return ret;
}
Date Date::operator++(int)  //前置++
{
	*this += 1;
	return *this;
}
Date Date::operator--()  //后置--
{
	Date ret(*this);
	*this -= 1;
	return ret;
}
Date Date::operator--(int)  //前置--
{
	*this -= 1;
	return *this;
}