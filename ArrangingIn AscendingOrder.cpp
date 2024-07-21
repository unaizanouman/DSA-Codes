#include<iostream>
using namespace std;
main()
{
	int a[5], temp;
	cout<<"Enter elements in the array: ";
		
	for (int i=0;i<5; i++){
		cout<<"Index: "<<i<<" Value: "<<endl;
		cin>>a[i];
	}
	//Sorting array in ascending order
	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];// swapped the values
				a[j]=temp;
			}
		}
	}
	cout<<"\nArray in ascending order= "<<endl;
for (int i=0; i<5; i++)
{
	cout<<a[i]<<endl;
}
	
}
