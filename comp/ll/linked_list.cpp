#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node *next;
};


node *head =NULL;
node* createnode(int data)
{
	node *temp=new node();
	temp->data= data ;
	temp->next= NULL;
	return temp;
}

node* insert_node(int data)
{
	node *temp =createnode(data);
	if(head ==NULL )return temp;
	temp->next= head; 
	head= temp ;
	return head;
}


int peek()
{
	if(head== NULL )
	{
		cout<<"stack in empty \n";
		return -1 ;

	}
	else
	{
		return head ->data;
	}
}



void pop()
{
	if(head==NULL)
	{
		cout<<"stack is empty \n";
		return ;
	}

	head =head->next;
	return; 

}

int  find_ans_cycle()
{
	node *slow = head , *fast = head ;
	while(slow!=NULL and fast->next!=NULL)
	{
		slow =slow->next;
		fast = fast->next->next;
		if(slow ==fast)
		{
			return 1;
		}
	}
	return -1;
}

// int start_point_of_cycle()
// {
// 	node *slow =head , *fast =head;
// 	int loopexists = 0;
// 	while(slow!=NULL and fast->next!=NULL)
// 	{
// 		slow =slow->next;
// 		fast =fast->next->next;
// 		if(slow == fast )
// 		{
// 			loopexists =1 ;
// 			break;
// 		}
// 	}
// 	if( loopexists == 1)
// 	{
// 		slow=head;
// 		while(slow!=fast)
// 		{
// 			fast=fast->next;
// 			slow= slow->next;
// 		}
// 	}

// 	int counter = 0;

// 	if(loopexists ==1 )
// 	{
// 		fast= fast->next;
// 		while(slow!=fast){
// 			fast=fast->next;
// 			counter++;
// 		}
// 		cout<<"counter is "<<counter<<" \n";
// 	}
// 		return slow->val;
// }

void display()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}

void reverse_ll()
{
	node *prev = NULL , *curr= head ,*next =NULL;
	while(curr != NULL)
	{
		next = curr->next;
		curr ->next = prev;
		prev =curr;
		curr = next;
	}
	head= prev;
}

int main()
{
	while(1){
		int choice;
		cin>>choice;
		int data;
		int flag= 0;
		switch(choice)
		{

			case 1 :cout<<"Enter the data \n";
					cin>>data; 
					head =insert_node(data);
					break;
			case 2:cout<<peek()<<" \n";
					break;
			case 3: pop();
					break;

			case 4:flag=1;
				break;
		}
		if(flag==1)
		break;
	}
	reverse_ll();
	display();
	return 0;
}