#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

node *head=NULL;

node* createnode(int data)
{
	node *temp=new node();
	temp->data=data;
	temp->next=NULL;
	return temp;
}

node* insertfront(int data)
{
	node *temp=createnode(data);
	if( head == NULL) 
		return temp;
	
	temp->next=head;
	head=temp;
	return head;
}

node* insertlast(int data)
{
	node *temp=createnode(data);
	if(head==NULL ) return temp;
	node *p=head;
	while(p->next!=NULL)
		p=p->next;

	p->next=temp;
	return head;
}

void display()
{
	node *p=head;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<"\n";
	return;
}

void reverse_linked_list()
{
	node *pre=NULL , *curr=head , *next=NULL;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=pre;
		pre=curr;
		curr=next;
	}
	head=pre;
}


int main()
{
	int t=10;
	while(t--)
	{
		cout<<"Enter ele \n";
		int ele;
		cin>>ele;
		head=insertfront(ele);
	}
	display();

	reverse_linked_list();
	cout<<"after reverse \n";

	display();
}