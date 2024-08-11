#include<iostream>
using namespace std;
class Trinagle
{
	int side1,side2,side3;
	public:
		void getdata()
		{
			cout<<"Enter the side of triangle:";
			cin>>side1;
			cout<<"Enter the side of triangle:";
			cin>>side2;
			cout<<"Enter the side of triangle:";
			cin>>side3;
		}
		void putdata()
		{
			if(side1==side2&&side1==side3)
			{
				cout<<"\nTriangle is equilateral";
			}
			else if(side1==side2||side2==side3 || side1==side3)
			{
				cout<<"\nTriangle is isosceles";
			}
			else
			{
				cout<<"\nTriangle is scalene";
			}
		}
};
int main()
{
	Trinagle t1;
	t1.getdata();
	t1.putdata();
	return 0;
}

