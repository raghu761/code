#include<iostream>
#include<queue>
using namespace std;

queue<int> q1;
queue<int> q2;

void insert_to_stack()
{
	cout<<"Enter the element into stack \n";
	int data;
	cin>>data;

	q2.push(data);
	while(q1.empty()==false)
	{
		q2.push(q1.front());
		q1.pop();
	}
	queue<int> q=q1;
	q1=q2;
	q2=q;
	return ;
}

void get_top_element()
{
	if(q1.empty()==true)
	{
		cout<<"stack is empty \n";
		return ;
	}
	else
	{
		cout<<"top element is "<<q1.front()<<" \n";
		return; 
	}
}

void display_stack()
{
	cout<<"display element : \n";
	queue<int> q=q1;
	while(q.empty()==false)
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<"\n";
}




int main()
{
	while(1)
	{

		int choice ;
		cin >> choice;

		switch (choice)
		{
			case 1: insert_to_stack();
					break;
			case 2: get_top_element();
					break;

			case 3: display_stack();
					break;

			case 4 :exit(0);

		}
	}

	return 0;
}