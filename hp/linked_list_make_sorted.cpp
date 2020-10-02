#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};

node *head=NULL;

node* createnode(int data)
{
	node *temp=new node();
	temp->data=data;
	temp->next=NULL;
	return temp;
}

node* insert_in_sorted(int data)
{
	node *temp=createnode(data);
	if(head== NULL) return temp;
	if(head->data > data)
	{
		temp->next=head;
		head=temp;
		return head;
	}
	node *p=head;
	while(p->next!=NULL and p->next->data <temp->data)
	{
		p=p->next;
	}
	temp->next=p->next;
	p->next=temp;
	return head;
}
void display()
{
	node *temp=head;
	while(temp!=NULL )
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}

int main()
{
	int n=5;
	while(n--)
	{
		int data;
		cin>>data;
		head=insert_in_sorted(data);
	}
	
	display();

	return 0;
}