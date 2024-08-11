#include<iostream>
using namespace std;
template <typename T,int size>
void display(T (&arr)[size])
{
		int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				T temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Before sorting :";
	for(i=0;i<=size;i++)
	{
		cout<<arr[i];
	}

}
int main()
{
	int b,i;
	string a[100];
	cout<<"Enter the array Size:";
	cin>>b;
	cout<<"Enter the array:";
	for(i=0; i<b; i++)
	{
		cin>>a[i];
	}
	display(a);
}

