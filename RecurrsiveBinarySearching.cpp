#include<iostream>
using namespace std;
int a[10],n,x;
int BinarySearch(int low, int high);
main(){
	cout<<"Enter the number of elements you want to add: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Index: "<<i<<" Value: ";
		cin>>a[i];
	}
	cout<<"Enter the number you want to search in the array: ";
	cin>>x;
	
	int res=BinarySearch(0,n-1);
	if(res==-1)
	cout<<"\nNo value matched!";
	else 
	cout<<"\nValue found at index: "<<res;
}
int BinarySearch(int low, int high){
	if(low>high)
	return -1;
	else{
		int mid=(low+high)/2;
		if(a[mid]==x)
		return mid;
		else if(a[mid]>x)
		return BinarySearch(low, mid-1);
		else
		return BinarySearch(mid+1, high);
	}
}
