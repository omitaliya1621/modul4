//rite a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading
#include<iostream>
using namespace std;
class cale
{
	public:
	
	void cal(int a,int b)
	{
		cout<<"\nAddition is = "<<a+b;
	}	
	void cal(int c,double d)
	{
		cout<<"\nSubtraction is = "<<c-d;
	}
	void cal(double e ,int f)
	{
		cout<<"\nMultiplication is = "<<e*f;
	}
	void cal(int o ,float m)
	{
		cout<<"\nDivision is = "<<o/m;
	}
};
int main()
{
	int a,b,c,f,o;
	float m;
	double e,d;
	cout<<"Enter the number1:";
	cin>>a;
	cout<<"Enter the number2:";
	cin>>b;
	cale c1;
	c1.cal(a,b);
	c=a;
	d=b;
	c1.cal(c,d);
	e=a;
	f=b;
	c1.cal(e,f);
	o=a;
	m=b;
	c1.cal(o,m);
	return 0;
	
}
