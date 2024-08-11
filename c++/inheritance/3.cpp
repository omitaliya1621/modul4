
//. Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)
#include<iostream>
using namespace std;
class Person
{
	public:
		string name;
		int age;
		void getdata1()
		{
			cout<<"Enter the name:";
			cin>>name;
			cout<<"Enter the age is";
			cin>>age;
		}	
};
class Student:public Person
{	
	public:
	int per;
	void getdata2()
	{
		cout<<"Enter the percentage:";
		cin>>per;
	}
		
};
class Teacher:public Student
{
		public:
	int salary;
	void getdata3()
	{
		cout<<"Enter the salary :";
		cin>>salary;
	}
	void display()
	{
		cout<<"\nName is ="<<name;
		cout<<"\nAge is ="<<age;
		cout<<"\nPercentage is ="<<per;
		cout<<"\nSalary is = "<<salary;
	}
	
};
int main()
{
	Teacher t1;
	t1.getdata1();
	t1.getdata2();
	t1.getdata3();
	t1.display();
	return 0;
}
