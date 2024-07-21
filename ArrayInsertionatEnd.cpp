#include<iostream>
using namespace std;
 main()
{
//program to add an element at the first place of an array
int arr[10],n,x,i;
cout<<"Enter the no. of elements you want to add: ";
cin>>n;

for( i=0;i<n;i++)
{
	cout<<"Enter the "<<i<<" value of array: ";
	cin>>arr[i];

	}	
	
	cout<<"Enter the next element you want to add at the last place: ";
	cin>>x;
	

	arr[i]=x;
	n++;
	cout<<"\nArray elements= ";	
	for( i=0;i<n;i++){
	
	cout<<arr[i]<<" ";
}
}
