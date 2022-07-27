#pragma once
#include<iostream>
#include<cassert>
using namespace std;

class Date
{
	friend inline ostream& operator<<(ostream& out, const Date& d);
	friend inline istream& operator>>(istream& in, Date& d);
public:

	bool CheckDate()
	{
		return (_month > 0 && _month <= 12 
			&& _day > 0 && _day <= GetMonthDay(_year, _month));
	}

	int GetMonthDay(int year, int month)
	{
		static int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int day = days[month];
		if (month == 2
			&& ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			day++;
		}
		return day;
	}

	Date(int year = 1970, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
		assert(CheckDate());
	}

	~Date()
	{
		cout << "~Date()" << endl;
	}

	Date(const Date& d) 
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	Date& operator=(const Date& d);

	bool operator==(const Date& d)const;

	bool operator>(const Date& d)const;

	bool operator>=(const Date& d)const;

	bool operator<(const Date& d)const;

	bool operator<=(const Date& d)const;

	Date& operator+=(int day);

	Date& operator-=(int day);

	Date& operator++();

	Date operator++(int);

	Date& operator--();

	Date operator--(int);

	Date operator+(int day);

	Date operator-(int day);

	void showDate()const
	{
		cout << _year << "/ " << _month << "/ " << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

inline ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "/ " << d._month << "/ " << d._day;
	return out;
}

inline istream& operator>>(istream& in, Date& d)
{
	cin >> d._year >> d._month >> d._day;
	assert(d.CheckDate());
	return in;
}