//Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)

#include<iostream>
using namespace std;
class Student
{
	public:
	int roll;
	string name;
	Student()
	{
		cout<<"Enter the name = ";
		cin>>name;
		cout<<"Enter the roll no = ";
		cin>>roll;	
	}	
};
class Test:public Student
{
	public:
	int total,mark1,mark2;
	Test()
	{
		cout<<"Enter the PHP : ";
		cin>>mark1;
		cout<<"Enter the VB : ";
		cin>>mark2;
		total=mark1+mark2;
	}	
};
class Result:public Test
{
	public:
	Result()
	{
		cout<<"\nyour name is : "<<name;
		cout<<"\nyour rollno is : "<<roll;
		cout<<"\nyour percentage is : "<<(total*100)/200;
	}
	
~Result()
{
	
}
};
int main()
{

	Result r1; 
	return 0;
}
