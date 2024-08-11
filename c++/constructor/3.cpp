#include<iostream>
using namespace std;
class car
{
	int model,year;
	string company;
	public:
		void get()
		{
			cout<<"Enter the car company name:";
			cin>>company;
			cout<<"Enter the car company model:";
			cin>>model;
			cout<<"Enter the car company year:";
			cin>>year;
		}
		void set()
		{
			cout<<"\nEnter the car company name:"<<company;
			cout<<"\nEnter the car company model:"<<model;
			cout<<"\nEnter the car company year:"<<year;
		}
};
int main()
{
	 car c1;
	 c1.get();
	 c1.set();
	 return 0;
}
