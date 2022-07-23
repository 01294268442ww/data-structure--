#include"Date.h"

void test()
{
	Date d1(2022,7,23);
	d1.ShowDate();

	
	Date d3(2002, 3, 5);
	d3.ShowDate();

	

	d1 += 50;
	d1.ShowDate();

	d1 -= 30;
	d1.ShowDate();

	cout << (d1 == d3) << endl;
	

	cout << (d1 > d3) << endl;
	d1.ShowDate();
	d3.ShowDate();
}

int main()
{
	test();

	return 0;
}