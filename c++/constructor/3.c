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
			cin>>name;
			cout<<"Enter the car company model name:";
			cin>>model;
			cout<<"Enter the car company year name:";
			cin>>company;
		}
		void set()
		{
			cout<<"Enter the car company name:"<<name;
			cout<<"Enter the car company model name:"<<model;
			cout<<"Enter the car company year name:"<<company;
		}
};
int main()
{
	 car c1;
	 c1.get();
	 c1.set();
	 return 0;
}
