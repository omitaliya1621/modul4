#include<iostream>
using namespace std;
class circle
{
	int radius;
	public:
	void display()
	{
		cout<<"\nEnter the radiusadious:";
		cin>>radius;
		cout<<"\narea of circle:"<<3.14*(radius*radius);
		cout<<"\ncircumference of circle:"<<2*3.14*radius;	
	}
};
int main()
{
	circle c1;
	c1.display();
}
