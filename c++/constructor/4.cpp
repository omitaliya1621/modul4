#include<iostream>
using namespace std;
class Bank
{
	int account,balance,op,a;
	public:
	void display()
	{
		cout<<"Enter the account  number:";
		cin>>account;
		cout<<"Enter the Balance  number:";
		cin>>balance;
		do
		{
		cout<<"\n0 for withdraw 1 for diposite";
		cin>>op;

		switch(op)
			{
				case 0:
					cout<<"\nWithdrow";
					break;
				case 1:
					cout<<"\nDiposite";
					break;
			}
					cout<<"\nenter 0 to exit and 1 to continue";
					cin>>a;
		}while(a==0);

	}	
};
int main()
{
	Bank b1;
	b1.display();
	return 0;
	
}
