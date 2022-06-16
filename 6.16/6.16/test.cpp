#include<iostream>
using namespace std;

class Person
{
public:
	friend ostream& operator<<(ostream& cout, Person& p);

	Person()
	{
		_x = 0;
		_y = 0;
	}
	Person(int x, int y)
	{
		_x = x;
		_y = y;
	}

	Person operator+(Person& another)
	{
		Person tmpe;
		tmpe._x = _x + another._x;
		tmpe._y = _y + another._y;
		return tmpe;
	}

	Person& operator++()
	{
		_x++;
		_y++;
		return *this;
	}

	Person operator++(int)
	{
		Person tmpe = *this;
		_x++;
		_y++;
		return tmpe;
	}

	Person& operator=(Person &p)
	{
		if (ptr != NULL)
		{
			delete ptr;
			ptr = NULL;
		}

		ptr = new int(*p.ptr);
		return *this;
	}

	void Print()
	{
		cout << "_x == " << _x << "  _y == " << _y << endl;
	}
private:
	int _x;
	int _y;
	int* ptr;
};

ostream& operator<<(ostream& cout, Person& p)
{
	cout << p._x << p._y << endl;
	return cout;
}


void test1()
{
	Person p1(100, 29);
	Person p2(23, 45);
	Person p3 = p1 + p2;
	++p3;
	cout << p3;
	p3++;
	cout << p3;

}

int main()
{
	test1();
}