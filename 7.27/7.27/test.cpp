#include"Date.h"

void test1()
{
	Date d1(2022, 7, 27);
	d1.showDate();
	
	Date d3(2002, 3, 5);
	
	cout << (d1 < d3) << endl;
	cout << (d1 == d3) << endl;
	cout << (d1 > d3) << endl;
	cout << (d1 <= d3) << endl;
	cout << (d1 >= d3) << endl;
}

void test2()
{
	Date d1(2022, 7, 27);
	
	d1 += 40;
	d1.showDate();

	d1 += 400;
	d1.showDate();

	d1 += 4000;
	d1.showDate();

	d1 += 40000;
	d1.showDate();
}


void test3()
{
	Date d1(2022, 7, 27);

	/*(d1 + 40).showDate();
	(d1 + 400).showDate();
	(d1 + 4000).showDate();
	(d1 + 40000).showDate();*/

	//(d1 + -4000).showDate();

	/*(d1 - 40).showDate();
	(d1 - 400).showDate();
	(d1 - 4000).showDate();
	(d1 - 40000).showDate();*/

	/*d1++.showDate();
	(++d1).showDate();
	d1--.showDate();
	(--d1).showDate();*/


	cin >> d1;
	cout << d1 << endl;

}

int main()
{
	test3();
	return 0;
}