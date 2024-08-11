#include<iostream>
using namespace std;
 inline mul(int x,int y)
 {
 	return(x*y);
 }
 
 inline cube(int x)
 {
 	return(x*x*x);
 }
int main() 
{
	int a,b;
	cout<<"Enter the num1:";
	cin>>a;
	cout<<"Enter the num2:";
	cin>>b;
	cout<<"\nmultipliaction:"<<mul(a,b);
	cout<<"\ncubic of num1 :"<<cube(a);
	cout<<"\ncubic of num2 :"<<cube(b);
	
	return 0;
}
