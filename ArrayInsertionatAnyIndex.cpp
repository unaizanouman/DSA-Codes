#include<iostream>
using namespace std;
 main()
{
//program to add an element at any index of an array
int arr[10],n,x,y;
cout<<"Enter the no. of elements you want to add: ";
cin>>n;

for(int i=0;i<n;i++)
{
	cout<<"\nEnter the "<<i<<" value of array: ";
	cin>>arr[i];
	}	
	cout<<"\nEnter the position at which you want to add the element: ";
	cin>>x;
	cout<<"\nEnter the element at the particular position: ";
	cin>>y;
	
for(int i=n; i>=x;i--)
{
	arr[i]=arr[i-1];
	
	}
	arr[x]=y;
	n++;
	cout<<"\nArray elements= ";	
	for(int i=0;i<n;i++){
	
	cout<<arr[i]<<" ";
}
}
