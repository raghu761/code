#include<iostream>
using namespace std;

struct node
{
int data;
int priority;
node *next;
};
node *head=NULL;

node *createnode(int data, int p)
{
	node *temp=new node();
	temp->data=data;
	temp->priority=p;
	temp->next=NULL;
	return temp;
}

node* pop_element()
{
	node *temp=head;
	head=head->next;
	free(temp);
	return head;
}

node* push_element(int data, int p)
{
	node *start= head;
	node *temp=createnode(data, p);

	if(head==NULL)
	{
		return temp;
	}

	if(head->priority > p)
	{
		temp->next=head;
		head=temp;
		return head;
	}
	else
	{
		while(start->next!=NULL and start->next->priority < p)
			start=start->next;

		temp->next=start->next;
		start->next=temp;
		return head;
	}

}
void display()
{
	node *temp=head;
	while(temp!=NULL ) {
		cout<<temp->priority<<" -> ";
		cout<<temp->data<<" \n";
		temp=temp->next;
	}
	cout<<" \n";
}


int main()
{
	int n=4;
	while(n--)
	{
		int t1,t2;
		cin>>t1>>t2;
		head=push_element(t1,t2);
	}


	display();

	return 0;
}