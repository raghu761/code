#include<bits/stdc++.h>
using namespace std;
class cls
{
public: 
	struct  node
	{
		int data;
		node *prev;
		node *next; 		
	};

	node *head ;
	
	cls()
	{
		head = NULL;
	}
	
	node* createnode(int data)
	{
		node* temp= new node();
		temp->data= data;
		temp->prev = NULL;
		temp->next = NULL;
		return temp ;
	}

	node* insertnode(int data)
	{
		node *temp=createnode(data);
		if( head == NULL ) return temp ;
		head->prev = temp;
		temp->next = head;
		head = temp;
		return head;
	}

	void display()
	{
		cout<<"display values : \n";
		node *temp = head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
};


int main()
{
	cls c; 
	for(int i=0;i<5;i++)
		c.head = c.insertnode(i);
	c.display();
	return 0;
}
