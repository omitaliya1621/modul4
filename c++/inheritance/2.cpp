// Write a C++ Program to find Area of Rectangle using inheritance0
#include<iostream>
using namespace std;
class Area
{
	public:
		int length,width;
	Area()
	{
		cout<<"enter the length:";
		cin>>length;
		cout<<"Enter the Width :";
		cin>>width;	
	}	
};
class Rectangle:public Area
{
	public:
	Rectangle()
	{
		cout<<"\nArea of Rectangle = "<<length*width;
	}
~Rectangle()
{
}
};

int main()
{
	Rectangle r1;
}
