#include"Date.h"

void test1()
{
	Date d1;
	
	Date d2(2022, 7, 24);
	Date d3(2011, 8, 11);
	d3 = d2++;
	d3.showDay();
	d2.showDay();

	d3 = ++d2;
	d3.showDay();
	d2.showDay();

	d3 = d2--;
	d3.showDay();
	d2.showDay();

	d3=--d2;
	d3.showDay();
	d2.showDay();

	(d2 + 4).showDay();
	(d2 + 40).showDay();
	(d2 + 400).showDay();
	(d2 + 4000).showDay();
	(d2 + 40000).showDay();

	(d2 - 4).showDay();
	(d2 - 40).showDay();
	(d2 - 400).showDay();
	(d2 - 4000).showDay();
	(d2 - 40000).showDay();

	cout << (d3 - d2) << endl;

}

void test2()
{
	Date d(2022, 7, 25);
	//cout << d << endl;
	//d.operator<<(cout);
	d << cout;
}

int main()
{
	test2();
	return 0;
}