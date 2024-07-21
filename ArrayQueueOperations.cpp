#include<iostream>
using namespace std;

int queue[5],n=5,x,rear=-1,front=-1;

void Insert(){
	
	if(rear==n-1)
	cout<<"\nQueue is full!";
	else
	{
		if(front=-1)
		front=0;
		cout<<"\nEnter a number: ";
		cin>>x;
		rear++;
		queue[rear]=x;
	}
}

void Delete(){
	if(front==-1)
	cout<<"\n\nQueue is empty!";
	else{
		cout<<"\nElement deleting from queue is: "<<queue[front];
		if(front==rear){
			front=-1;
			rear=-1;
		}
		else
		front++;
	}
	
}

int peek(){
	if(front==-1)
	return 0;
	else
	return queue[front];
}

void Display(){
	if(front==-1)
	cout<<"\nCan't display elements bcz the queue is empty!";
	else{
	
	cout<<"\n\nDisplaying queue elements: "<<endl;
	for(int i=front; i<=rear; i++)
	cout<<queue[i]<<endl;}
}

main()
{
	for(int i=0; i<6; i++)
	Insert();
	
	cout<<endl;
	
	int y=peek();
	if (y==0)
	cout<<"\n Queue is empty";
	else
	cout<<"\n\nElement at front of queue: "<<y;
	
	Display();
	
	for(int j=0; j<6; j++)
	Delete();
	
	
}
