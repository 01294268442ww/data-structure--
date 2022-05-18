#include<iostream>
using namespace std;
#define ¦Ð 3.1415

class Shape
{
public:
	virtual double area()const= 0;

	virtual double perimeter()const= 0;

};

class Circle :public Shape
{
public:
	Circle(double R):radius(R)
	{
		
	}
	virtual double area()const
	{
		return radius * radius * ¦Ð;
	}
	virtual double perimeter()const
	{
		return 2 * ¦Ð * radius;
	}
protected:
	double radius;
};

class Square :public Shape
{
public:
	Square(double a):sideLength(a)
	{
		
	}
	virtual double area()const
	{
		return sideLength * sideLength;
	}
	virtual double perimeter()const
	{
		return 4 * sideLength;
	}
protected:
	double sideLength;
};

class Rectangle :public Shape
{
public:
	Rectangle(double w, double h):width(w),height(h)
	{
		

	}
	virtual double area()const
	{
		return width * height;
	}

	virtual double perimeter()const
	{
		return 2 * width + 2 * height;
	}
	
protected:
	double width;
	double height;
};


void PrintArea(Shape& s)
{
	cout << s.area() << endl;
}

void PrintPer(Shape& s)
{
	cout << s.perimeter() << endl;
}

double Total(Shape**p)
{
	double sumArea = 0;
	for (int i = 0; i < 3; i++)
	{
		sumArea += p[i]->area();
	}
	return sumArea;
}

int main()
{
	Circle c(2.0);
	cout << "area of circle = ";
	PrintArea(c);
	cout << "perimeter of circle = ";
	PrintPer(c);
	
	Square s(2.0);
	cout << "area of circle = ";
	PrintArea(s);
	cout << "perimeter of circle = ";
	PrintPer(s);
	Rectangle r(2.0,2.0);
	cout << "area of circle = ";
	PrintArea(r);
	cout << "perimeter of circle = ";
	PrintPer(r);

	Shape* p[3] = { &c,&s,&r };

	cout << "total area =" << Total(p) << endl;

	return 0;
}