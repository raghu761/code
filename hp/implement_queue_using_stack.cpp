#include<iostream>
#include<stack>
using namespace std;
stack<int> stk1,stk2;


void insert_to_queue()
{
	cout<<"Enter the data \n";
	int data;
	cin>>data;

	stk1.push(data);
}

void delete_from_quee()
{
	if(stk2.empty()==true )
	{
		if(stk1.empty()==true)
		{
			cout<<"stack is empty \n";
			return; 
		}
		else
		{
			while(stk1.empty()==false){
					stk2.push(stk1.top());
					stk1.pop();
				}
			
		}
	}
	else{
		cout<<"poped elemeny is "<<stk2.top()<<" \n";
		stk2.pop();
	}


}

int get_top()
{
	if(stk2.empty()==true)
	{
		if(stk1.empty()==true)
		{
			cout<<"stack is empty \n";
			return -1;
		}
		else
		{
			while(stk1.empty()==false)
			{
				stk2.push(stk1.top());
				stk1.pop();
			}
			
		}
	}
	else
		return stk2.top();
}

int main()
{
	while(1)
	{
		int choice ;
		cin >> choice;
		if(choice == 1)
		{
			insert_to_queue();
		}
		else if( choice == 2)
		{
			delete_from_quee();
		}
		else
		{
			cout<<"top element is "<<get_top()<<"\n";
		}
	}
	return 0;
}