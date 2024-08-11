// Write a C++ Program to illustrates the use of Constructors in multilevel
//inheritance
#include<iostream>
using namespace std;
class Grandfather
{
	private:
	int a=10;
	protected:0
	int b=20;
	public:
	int c=30;
	Grandfather()
	{
		cout<<"\ngrandfather ";
		cout<<"\nPrivate="<<a<<"\nprotected = "<<b<<"\npublic="<<c;	
	}	
};
class Father:public Grandfather
{
	public:
	Father()
	{
		cout<<"\nfather ";
		cout<<"\nproteected= "<<b<<"\npublic="<<c;	
	}	
};
class Child:public Father
{
	public:
	Child()
	{
		cout<<"\nChild";
		cout<<"\npublic="<<c;	
	}	
};
int main()
{
	Child c1;
	
	return 0;
}
