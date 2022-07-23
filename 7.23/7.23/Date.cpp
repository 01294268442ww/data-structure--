#include"Date.h"


Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

Date& Date::operator=(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;

	return *this;
}

int Date::GetMonthDay(int year, int month)
{
	static int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day = days[month];
	if (month == 2
		&& ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		day += 1;
	}
	return day;
}

Date::~Date()
{
	cout << "~Date()" << endl;
}

Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_month = 1;
			_year++;
		}
	}
	return *this;
}

Date Date::operator+(int day)
{
	Date tmp = *this;

	tmp._day += day;
	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
	{
		tmp._day -= GetMonthDay(tmp._year, tmp._month);
		tmp._month++;
		if (tmp._month == 13)
		{
			tmp._month = 1;
			tmp._year++;
		}
	}
	return tmp;
}

Date Date::operator-(int day)
{
	Date tmp = *this;
	tmp._day -= day;
	while (tmp._day <= 0)
	{
		tmp._day += GetMonthDay(tmp._year, tmp._month);
		tmp._month--;
		if (tmp._month == 0)
		{
			tmp._month = 12;
			tmp._year--;
		}
	}
	tmp._day += 1;

	return tmp;
}

Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day <= 0)
	{
		_day += GetMonthDay(_year, _month);
		_month--;
		if (_month == 0)
		{
			_month = 12;
			_year--;
		}
	}
	_day += 1;

	return *this;
}

//Ç°ÖÃ++
Date& Date::operator++()
{
	_day++;
	if (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month--;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return *this;
}

//ºóÖÃ 
Date Date::operator++(int)
{
	Date tmp = *this;
	_day++;
	if (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month--;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return tmp;
}

Date Date::operator--(int)
{
	Date tmp = *this;
	_day--;
	while (_day <= 0)
	{
		_day += GetMonthDay(_year, _month);
		_month--;
		if (_month == 0)
		{
			_month = 12;
			_year--;
		}
	}
	_day += 1;

	return tmp;
}

Date& Date::operator--()
{
	_day--;
	if (_day <= 0)
	{
		_day += GetMonthDay(_year, _month);
		_month--;
		if (_month == 0)
		{
			_month = 12;
			_year--;
		}
	}
	_day += 1;

	return *this;
}

bool Date::operator>(const Date& d)
{
	return _year > d._year || _month > d._month || _day > d._day;
}

bool Date::operator==(const Date& d)
{
	return _year == d._year && _month == d._month && _day == d._day;
}

bool Date::operator>=(const Date& d)
{
	return _year >= d._year || _month >= d._month || _day >= d._day;
}

bool Date::operator<(const Date& d)
{
	return _year < d._year || _month < d._month || _day < d._day;
}

bool Date::operator<=(const Date& d)
{
	return _year <= d._year || _month <= d._month || _day <= d._day;
}

bool Date::operator!=(const Date& d)
{
	return _year != d._year || _month != d._month || _day != d._day;
}

int Date::operator-(const Date& d)
{
	static int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int gap = 0;

	/*if (*this < d)
	{
		Date tmp = *this;
		*this = d;
		d = tmp;
	}*/
	
}