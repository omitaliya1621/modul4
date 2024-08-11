//1. Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template<typename T>
void swapp(T &a,T &b)
{
	T temp=a;
	a=b;
	b=temp;
}
int main()
{
	int num1=5,num2=10;
	cout<<"\n Before swapping is:"<<num1;
	cout<<"\n Before swapping is:"<<num2;
	swapp(num1,num2);
	cout<<"\n After Swapping is:"<<num1;
	cout<<"\n After Swapping is:"<<num2;
	cout<<"\n\n";
	char c='A',d='B';
	cout<<"\n Before swapping is:"<<c;
	cout<<"\n Before swapping is:"<<d;
	swapp(c,d);
	cout<<"\n After Swapping is:"<<c;
	cout<<"\n After Swapping is:"<<d;
	cout<<"\n\n";
	float e=45.225,f=364.355;
	cout<<"\n Before swapping is:"<<e;
	cout<<"\n Before swapping is:"<<f;
	swapp(e,f);
	cout<<"\n After Swapping is:"<<e;
	cout<<"\n After Swapping is:"<<f;
	
	return 0;
}
