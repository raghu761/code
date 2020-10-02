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

	void  insertnode(int data)
	{
		node *temp=createnode(data);
		if( head == NULL )
			{head = temp ;
				return;
			}
		head->prev = temp;
		temp->next = head;
		head = temp;
		
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
	// for(int i=0;i<5;i++)
	// 	 c.insertnode(i);
	// c.display();

	bool isprime[51]={true};
	for(int i=2;i*i<51;i++)
	{
		if(isprime[i]==false)
			continue;
		
		for(int j=i*i;j<51;j+=i)
		{
			isprime[j]=false;	
		}
	}

	for(int i=0;i<51;i++) cout<<isprime[i]<<" ";
		cout<<"\n";



	for(int i=2;i<51;i++)
	{
		if(isprime[i])
		{
			c.insertnode(i);

		}
	}
	c.display();


	return 0;
}
