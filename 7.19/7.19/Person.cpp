

//struct Person
//{
//	void showPerson()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//		cout << _tel << endl;
//	}
//
//	char _name[20];
//	int _age;
//	int _tel[20];
//};

#include"Person.h"

//Person.cpp
void Person::showPerson()
{
	cout << _name << endl << _age << endl << _tel << endl;
}


//
//int main()
//{
//	/*Person p1;
//	p1.showPerson();*/
//
//	return 0;
//}