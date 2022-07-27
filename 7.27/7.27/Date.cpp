#include"Date.h"

Date& Date::operator=(const Date& d)
{
	//避免自己给自己赋值
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	return *this;
}

bool Date::operator==(const Date& d) const
{
	return _year == d._year && _month == d._month && _day == d._day;
}

bool Date::operator>(const Date& d) const
{
	if ((_year > d._year)
		|| (_year == d._year && _month > d._month)
		|| (_year == d._year && _month == d._month && _day > d._day))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Date::operator>=(const Date& d) const
{
	return ((*this > d) || (*this == d));
}

bool Date::operator<(const Date& d) const
{
	return !(*this >= d);
}

bool Date::operator<=(const Date& d) const
{
	return ((*this < d) || (*this == d));
}

Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		return *this -= -day;
	}

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


Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		return *this += -day;
	}

	_day -= day;
	while (_day <= 0)
	{
		_month--;
		if (_month == 0)
		{
			_month = 12;
			_year--;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}


Date& Date::operator++()
{
	return *this += 1;
}

Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}

Date& Date::operator--()
{
	return *this -= 1;
}

Date Date::operator--(int)
{
	Date tmp = *this;
	*this -= 1;
	return tmp;
}

Date Date::operator+(int day)
{
	Date tmp = *this;
	return tmp += day;
}

Date Date::operator-(int day)
{
	Date tmp = *this;
	return tmp -= day;
}