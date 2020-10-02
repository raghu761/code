#include<bits/stdc++.h>
using namespace std;
queue<int> q1,q2;

void push_stack()
{
	cout<<"Enter the element \n";
	int ele;
	cin>>ele;

	q1.push(ele);
	while(q2.empty()==false){
		q1.push(q2.front());
		q2.pop();
	}
	queue<int> q=q1;
	q1=q2;
	q2=q;
	
}

void display()
{
	cout<<"top ele is "<<q2.front()<<" \n";
	q2.pop();
}
void pop_stack()
{
	display();
}


int main()
{
	while(1)
	{
		int choice; 
		cin>>choice;
		if(choice==1 )
			push_stack();
		else if(choice == 2)
			pop_stack();

	}
	return 0;
}