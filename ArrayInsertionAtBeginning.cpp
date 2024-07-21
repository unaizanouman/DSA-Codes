#include<iostream>
using namespace std;
 main()
{
//program to add an element at the first place of an array
int arr[10],n,x;
cout<<"Enter the no. of elements you want to add: ";
cin>>n;

for(int i=0;i<n;i++)
{
	cout<<"Enter the "<<i<<" value of array: ";
	cin>>arr[i];

	}	
	
	cout<<"Enter the next element you want to add at th first place: ";
	cin>>x;
	
for(int i=n; i>0;i--)
{
	arr[i]=arr[i-1];
	
	}
	arr[0]=x;
	n++;
	cout<<"\nArray elements= ";	
	for(int i=0;i<n;i++){
	
	cout<<arr[i]<<" ";
}
}
