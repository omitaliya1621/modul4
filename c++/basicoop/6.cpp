#include<iostream>
using namespace std;
class person
{
	int age;
	string name,country;
	public:
	setdata()
	{
			cout<<"Enter the name:";
			cin>>name;
			cout<<"Enter the age:";
			cin>>age;
			cout<<"Enter the country:";
			cin>>country;
	}	
	getdata()
	{
		cout<<"\nname of person:"<<name;
		cout<<"\nage of person:"<<age;
		cout<<"\ncountry name:"<<country;
	}
};
int main()
{
	person p1;
	p1.setdata();
	p1.getdata();
}
