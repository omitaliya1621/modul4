//Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;
class Student
{
	public:	
		string name;
		int roll;
	  void	student()
		{
			cout<<"Enter the name :";
			cin>>name;
		
			cout<<"Enter the Rollno :";
			cin>>roll;
		}
};
class Marksheet
{
	public:
		int php,vb,c;
		void marksheet()
		{
			cout<<"Enter the Mark of C++ = ";
			cin>>c;
			cout<<"Enter the Mark of PHP = ";
			cin>>php;
			cout<<"Enter the Mark of Vb.Net = ";
			cin>>vb;
		}
					
};
class Result:public Marksheet,public Student
{
		public:
	void result()
	{
	cout<<"\nRoll no is = "<<roll;
	cout<<"\nName is = "<<name;
	cout<<"\nPercentage is = "<<((c+php+vb)*100)/300;
	}
};
int main()
{
	Result r1;
	r1.student();
	r1.marksheet();
	r1.result();
	return 0;
}
