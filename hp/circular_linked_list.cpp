#include<iostream>
using namespace std;
struct  node
{
	int data;
	node *next;
};

node *head=NULL;

void print()
{
	if(head==NULL ) return; 

	node *temp=head;
	do
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=head);
	cout<<" \n";

}
node* createnode(int data)
{
	node *temp=new node();
	temp->data=data;
	temp->next=temp;
	return temp;
}

node* insertFirst(int data)
{
	node *temp=createnode(data);
	if(head==NULL) return temp;

	node *p=head;
	while(p->next!=NULL) p=p->next;
	temp->next=head;
	p->next=temp;
	head=temp;
	return head;
}


int main()
{

	return 0;
}