#include<iostream>
using namespace std;
class Cricketer
{
	public:
		string name;
		Cricketer()
		{
			cout<<"Enter the Cricketer name: ";
			cin>>name;	
		}
		
};
class Batsman:public Cricketer
{
	public:
		
		int match,run,per;
		Batsman()
		{
			cout<<"Total match is:";
			cin>>match;
			cout<<"Total run is:";
			cin>>run;
			cout<<"Enter the performance:";
			cin>>per;
		
		}
		void avg()
		{
			cout<<"\naverage is="<<run/match;	
		} 
		void display()
		{
			cout<<"\nName is:"<<name;
			cout<<"\nTotal match is:"<<match;
			cout<<"\nTotal run is:"<<run;
			avg();
			cout<<"\nbest performance : "<<per;
			
		}
};
int main()
{
		Batsman b1;
		b1.display();	
}

