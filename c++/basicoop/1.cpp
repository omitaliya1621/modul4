#include<iostream>
using namespace std;
class op
{
	public:
		int num1,num2;
	void display()
	{
		cout<<"Enter the number1:";
		cin>>num1;
		cout<<"\nEnter the number2:";
		cin>>num2;
		cout<<"\naddition is="<<num1+num2;
		cout<<"\nsubtraction is="<<num1-num2;
		cout<<"\nmultiplication is="<<num1*num2;
		cout<<"\ndivision is="<<num1/num2;
	}
};
int main()
{ 
	op p1;
	p1.display();
	return 0;
}
