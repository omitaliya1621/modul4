#include<iostream>
using namespace std;
class rectangle
{
	int length,width;
	public:
		void display()
		{
			cout<<"Enter the length of rectangle:";
			cin>>length;
			cout<<"Enter the width of rectangle:";
			cin>>width;
			cout<<"\narea of rectangle:"<<length*width;
			cout<<"\nperimeter of rectangle:"<<(length*width)*2;
		}
};
int main()
{
	rectangle r1;
	r1.display();
}
