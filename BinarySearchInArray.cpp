#include<iostream>
using namespace std;
int BinarySearch(int low, int high);
int a[10],n, temp, x;
main()
{
	cout<<"Enter the size of elements you wanted to enter: ";
	cin>>n;
	
	cout<<"\nEnter elements in array: ";
	for(int i=0; i<n; i++)
	{
		cout<<"\nIndex: "<<i<<" Value: ";
		cin>>a[i];
	}
	cout<<"\nEnter the value you want to search: ";
	cin>>x;
	
	int res=BinarySearch(0, n-1);
	
	if(res==-1)
	cout<<"\nNo number matched!";
	else 
	cout<<"Number: "<<x<<" is found at the index: "<<res;
}
int BinarySearch(int low, int high){

	
	while(low<=high)
	{
			//Arranging array in ascending order
	for(int i=0; i<n; i++)
	{
		for (int j=i+1; j<n; j++)
		{
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
		int mid=(low+high)/2;
		if(a[mid]==x){
			return mid;
		}
		else if(a[mid]>x){
			high=mid-1;
		}
		else
		low=mid+1;
	}
	return -1;
}
