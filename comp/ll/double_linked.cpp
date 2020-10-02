#include<bits/stdc++.h>
using namespace std;
struct node {
	int data;
	node *next;
	node *prev;
};

node *head=NULL;

node* create_node(int data)
{
	node *temp=new node();
	temp->data=data;
	temp->next= temp->prev =NULL;
	return temp;
}

node* insert_node(int data)
{
	node *temp=create_node(data);

	if(head == NULL ) return temp ; 
	temp->next = head ;
	head->prev= temp ;
	head = temp;
	return head; 
}

void display()
{
	node *p = head; 
	cout<<"display \n";
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<" \n";
	return ;
}

node *delete_node()
{
	cout<<"Enter the index to delete \n";
	int index;
	cin>>index;

	if(index==1 )
	{
		if(head == NULL){ cout<<"not possibe \n" ;
		return head;
		}else return head->next;
	}

	int k =1 ;
	node *p  = head ;
	while(p-> next !=NULL and k != index )
	{
		p = p->next;
		k++;
	}
	if( k!= index)
	{
		cout<<"wrong index \n";
		return head; 
	}
	
	p->prev->next=p->next;
	if(p->next!=NULL)
		p->next->prev = p->prev;
	return head;
}

int main()
{
	while(1)
	{
		int  choice;
		 cin >> choice;
		 int val ;
		 switch(choice)
		 {
		 	case 1 :cout<<"Enter the val \n";
		 			cin >>val ;
		 			 head=insert_node(val );
		 			 break;
		 	case 2: head =delete_node();
		 			break;
		 	case 3: display();
		 			break;
		 }
	}
	return 0;
}