#include<iostream>
using namespace std;
class Date
{
	private:
		int day,month,year;
		public:
		void getdata(int day,int month,int year)
		{
			this->day=day;
			this->month=month;
			this->year=year;
		}
		void setdata()
		{
			if(month==1||month==3||month==5||month==7||month==8||month==10||month==12 )
			{
		     	if(day<=31)
				cout<<"Date is valid";
				else
				cout<<"Date is Not valid";
			}
			else if(month==4||month==6||month==9||month==11)		
			{
				if(day<=30)
				cout<<"Date is valid";
				else
				cout<<"Date is Not valid";
			}
			else if(month==2)
			{ 
			   if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
			   {
			      if(day==29)
			      	cout<<"Date is valid";
				   else
				  	cout<<"Date is Not valid";
		    	}
				 else
				{
				 
				 if(day==28)
			      	cout<<"Date is valid";
				   else
				  	cout<<"Date is Not valid";
				} 
			
			}
		}
};    
int main()
{
	int day,month,year;
	cout<<"Enter the day = ";
	cin>>day;
	cout<<"Enter the Month = ";
	cin>>month;
	cout<<"Enter the year = ";
	cin>>year;
	Date d1;
	d1.getdata(day,month,year);
	d1.setdata();
	return 0;
}
