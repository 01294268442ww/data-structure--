#pragma once

#include<iostream>
#include<cmath>
using namespace std;

class Date
{
public:

	friend inline ostream& operator<<(ostream& out, const Date& d);

	friend inline istream& operator>>(istream& in, Date& d);
	// 获取某年某月的天数
	int GetMonthDay(int year, int month)
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


	// 全缺省的构造函数
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	// 拷贝构造函数
	// d2(d1)
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	// 赋值运算符重载
	// d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator=(const Date& d);

	// 析构函数
	/*~Date()
	{
		cout << "~Date()" << endl;
	}*/

	// 日期+=天数
	Date& operator+=(int day);

	// 日期+天数
	Date operator+(int day);

	// 日期-天数
	Date operator-(int day);

	// 日期-=天数
	Date& operator-=(int day);

	// 前置++
	Date& operator++();

	// 后置++
	Date operator++(int);

	// 后置--
	Date operator--(int);

	// 前置--
	Date& operator--();

	// >运算符重载
	bool operator>(const Date& d);

	// ==运算符重载
	bool operator==(const Date& d);

	// >=运算符重载
	bool operator >= (const Date& d);


	// <运算符重载
	bool operator < (const Date& d);

	// <=运算符重载
	bool operator <= (const Date& d);

	// !=运算符重载
	bool operator != (const Date& d);

	// 日期-日期 返回天数
	int operator-(const Date& d);

	void showDay()
	{
		cout << _year << "/ " << _month << "/ " << _day << endl;
	}

	Date* operator&()
	{
		return this;
	}

	const Date* operator&() const
	{
		return this;
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
	return in;
}