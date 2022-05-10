#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;



class Person
{
public:
	Person(string name,string tel,int age)
	{
		_name = name;
		_tel = tel;
		_age = age;
	}

	void showPerson()
	{
		cout << "name :" << _name << endl;
		cout << "telephone :" << _tel << endl;
		cout << "age :" << _age << endl;
	}

protected:
	string _name;
	string _tel;
	int _age;
};


class Employee :virtual public Person
{
public:
	Employee(string name, string tel, int age,string workNum ):Person(name, tel, age)
	{
		_workNum = workNum;
	}

	void showEmployee()
	{
		showPerson();
		cout << "worknumber :" << _workNum << endl;
	}
	void showWorkNum()
	{
		cout << "worknumber :" << _workNum << endl;
	}
protected:
	string _workNum;
};

class Student :virtual public Person
{
public:
	Student(string name, string tel, int age, string studentNum) :Person(name, tel, age)
	{
		_studentNum = studentNum;
	}
	
	void showStudent()
	{
		showPerson();
		cout << "studentnumber :" << _studentNum << endl;
	}
	void showStudentNum()
	{
		cout << "studentnumber :" << _studentNum << endl;
	}
protected:
	string _studentNum;
};

class PartTime_Graduate_Student :public Employee, public Student
{
public:
	PartTime_Graduate_Student(string name, string tel, int age, string studentNum,string workNum,string majorCourse)
		:Person(name,tel,age),
		Employee(name, tel, age, workNum),
		Student(name,tel,age,studentNum)
	{
		_majorCourse = majorCourse;
	}
	void showPGS()
	{
		showPerson();
		showStudentNum();
		showWorkNum();
		cout << "majorcourse :" << _majorCourse << endl;
	}
protected:
	string _majorCourse;

};

int main()
{
	Employee e("张三","123",2,"22");
	e.showEmployee();
	cout << "**************Employ**************" << endl;
	Student s("李四", "234", 4, "123");
	s.showStudent();
	cout << "**************Student*************" << endl;
	PartTime_Graduate_Student p("三四", "1234", 24, "2102", "001", "数学");
	p.showPGS();
	return 0;
}