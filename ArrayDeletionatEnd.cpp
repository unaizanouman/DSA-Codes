#include<iostream>
using namespace std;
main()
{
	int a[10], n, x;
	
	cout<<"Enter the elements you want to enter: ";
	cin>>n;
	
	cout<<"Enter elements in the array: ";
		
	for (int i=0;i<n; i++){
		cout<<"Index: "<<i<<" Value: "<<endl;
		cin>>a[i];
	}
	cout<<"\n Enter the index to delete : ";
	cin>>x;
	for ( int i= x+1; i<n; i++)
	{
		a[i-1]=a[i];
	}
	n--;
	 
	cout<<"Values after deletion: "<<endl; 
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
}
