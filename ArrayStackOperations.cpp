#include<iostream>
using namespace std;
int stack[5], top=-1, n=5;
void push(int i);
void pop();
void display();
int peek();
main(){
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();
	pop();
	pop();
	pop();
	display();
	int y=peek();
	cout<<"\nElement at top of stack= "<<y;
}
void push(int x){
	if(top==n-1)
	cout<<"\nStack is full";
	else
	{
		top++;
		stack[top]=x;
	}
}

void display(){
	if(top==-1)
	cout<<"\nStack is empty";
	else
	{
		cout<<"\nStack elements are: "<<endl;
		for(int i=top; i>=0; i--){
			cout<<stack[i]<<endl;
		}
	}
}
void pop(){
	if(top==-1)
	cout<<"\nStack is empty";
	else
	{
		cout<<"\nElement at top popping out is: "<<stack[top];
		top--;
	}
}
int peek()
{
	if(top==-1)
	cout<<"\nStack is empty.";
	else
	return stack[top];
}
