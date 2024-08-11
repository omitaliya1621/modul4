#include<iostream>
using namespace std;
class om
{
	public:
	 om(int num1,int num2)
	 {
		cout<<"\naddition of:"<<num1+num2;
		cout<<"\nsubtraction of:"<<num1-num2;
		cout<<"\nDivision of:"<<num1/num2;
		cout<<"\nMultiplication of:"<<num1*num2;
	 }	
};
int main()
{
	int num1,num2;
	cout<<"Enter the num1:";
	cin>>num1;
	cout<<"\nEnter the num2:";
	cin>>num2;
	om o1(num1,num2);
	
}
