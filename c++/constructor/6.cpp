#include<iostream>
using namespace std;
class Employee
{
	private:
		string name;
		int id,salary,per;
		public:
		Employee(string name,int id,int salary)
		{
			this->name=name;
			this->id=id;
			this->salary=salary;
		}
		void setdat()
		{
			cout<<"\nEnter the employee performance :";
			cin>>per;
			cout<<"\n\nname is:"<<this->name;
			cout<<"\nid is:"<<this->id;
			cout<<"\nsalary is:"<<salary+(this->salary*per)/100;
		}
		
};
int main()
{
	string name;
	int id,salary;
	cout<<"\nEnter the employee name = ";
	cin>>name;
	cout<<"\nEnter the employee id = ";
	cin>>id;
	cout<<"\nEnter the salary = ";
	cin>>salary;
	Employee e1(name,id,salary);
	e1.setdat();
	return 0;
}

