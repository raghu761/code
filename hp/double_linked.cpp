#include<iostream>
using namespace std;
struct node
{
int data;
node *next,*pre;
};

node* createnode(int data)
{
	node *temp=new node();
	temp->data=data;
	temp->next=temp->pre=NULL;
	return temp;
}


node *head=NULL;
void display()
{
	cout<<"list is \n";
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
	return ;
}


node *insert_front(int data)
{
	node *temp=createnode(data);
	if(head==NULL)
		return temp;
	else
	{
		temp->next=head;
		head->pre=temp;
		head=temp;
		return head;
	}

}

node *insert_last(int data)
{
	node *temp=createnode(data);
	if(head==NULL) return temp;
	else
	{
		node *p=head;
		while(p->next!=NULL)
			p=p->next;

		p->next=temp;
		temp->pre=p;
		return head;
	}
}
node *insert_between(int data, int postiion)
{
	node *temp=createnode(data);
	int k=1;
	if(postiion ==1)
	{
		if(head==NULL) return temp;
		else insert_front(data);
	}
	else
	{
		if(head==NULL and postiion>1 )
		{
			cout<<"Error \n";
			return head; 	
		}
		node *p=head;
		while(k<postiion-1 and p->next!=NULL){
			p=p->next;
			k++;
		}
		cout<<"k "<<k <<" \n";
		if(k+1!=postiion){
			cout<<"Error in inserting \n";
			return head;
		}

		temp->next=p->next;
		temp->pre=p;
		if(p->next!=NULL)
			p->next->pre=temp;
		p->next=temp;
		display();
		return head;
	}
	return head;
}



int main()
{

	int n=5;
	while(n--)
	{
		int data;
		cin>>data;
		head=insert_last(data);

	}
	display();

	while(1)
	{
		cout<<"Enter data and postiion \n";
		int data;
		int pos;
		cin>>data>>pos;
		head=insert_between(data,pos);
	}

	return 0;
}