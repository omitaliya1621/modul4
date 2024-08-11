#include<iostream>
using namespace std;
class Student
{
	int roll,mark;
	string name,cl,grade;
	public:
		
		void diaplay(string name,string cl,int roll,int mark)
		{
			this->roll=roll;
			this->cl=cl;
			this->mark=mark;
			this->name=name;
		}
		void grad()
		{
			if(mark>=0 && mark<=49)
			{
			this->grade="D";
			}
			else if(mark>=50 && mark<=60)
			{
			this->grade="C";
			}
			else if(mark>60 && mark<=70)
			{
				this->grade="B";
			}
			else if(mark>70 && mark<=100)
			{
				this->grade="A";
		    }
		    
		}
		void dis()
		{
			cout<<"grade is ="<<grade;
		}
};
int main()
{
	int roll,mark;
	string name,cl;
	cout<<"Enter the roll no :";
	cin>>roll;
	cout<<"Enter the name :";
	cin>>name;
	cout<<"Enter the class :";
	cin>>cl;
	cout<<"Enter the total mark :";
	cin>>mark;
	Student s1;
	s1.diaplay(name,cl,roll,mark);
	s1.grad();
	s1.dis();
	return 0;
	
	
	
}
