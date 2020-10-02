#include<bits/stdc++.h>
using namespace std;
struct node 
{
	int data; 
	node *next;
};

node *head=NULL;

node* createnode(int data)
{
	node *temp = new node();
	temp->data= data; 
	temp->next=temp;
	return temp;
}
node *insert_node_first(int data)
{
	node *temp= createnode(data);
	if(head == NULL) 
		return temp ;

	node *p = head;
	do
	{
		p=p->next;
	}while(p->next!=head);
	temp->next= p->next;
	p->next= temp;
	head= temp;
	return head;

}

void display()
{
	node *p =head ;
	cout<<"display :\n";
	do{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=head);
	cout<<" \n";
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
		 			 head=insert_node_first(val );
		 			 break;
		 	// case 2: head =delete_node();
		 	// 		break;
		 	case 3: display();
		 			break;
		 }
	}

	return 0;
}