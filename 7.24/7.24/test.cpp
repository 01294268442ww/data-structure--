#include"Date.h"

void test()
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

int main()
{
	test();
	return 0;
}