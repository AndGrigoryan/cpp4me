#include <iostream>

using namespace std;



class Person
{
public:
	Person(string name, int age) : name_(name), age_(age)
	{
		cout << "Constructor Person:\t" << this << endl;
	}

	~Person()
	{
		cout << "Destructor Person:\t" << this << endl;
	}

	string name() const
	{
		return this->name_;
	}

	int age() const
	{
		return this->age_;
	}

private:
	string name_;
	int age_;
};

class Student : public Person
{
public:
	Student(string name, int age, string uni) : Person(name, age), uni_(uni)
	{
		cout << "Constructor Student:\t" << this << endl;
	}

	~Student()
	{
		cout << "Destructor Student:\t" << this << endl;
	}

	string university() const
	{
		return this->uni_;
	}

private:
	string uni_;
};

int main()
{

	Student st("john", 19, "Gazananoc");

	Person p = st;

	cout << p.name() << "\t" << p.age() << "\t" << endl;

	return 0;
}