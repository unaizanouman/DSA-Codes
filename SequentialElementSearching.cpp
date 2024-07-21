#include<iostream>
using namespace std;
main()
{
	int a[5], d, x;
	cout<<"Enter elements in the array: ";
		
	for (int i=0;i<5; i++){
		cout<<"Index: "<<i<<" Value: "<<endl;
		cin>>a[i];
	}
	cout<<"\n Enter the number you want to search : ";
	cin>>x;
	for ( int i= 0; i<5; i++)
	{
	if(x==a[i])
	{
		d=i;
		cout<<"Value: "<<x<<" is at index: "<<d;
	}

	}
	if(!d)

	cout<<"\nValue not fornd. Try another!"<<endl;
	
}
