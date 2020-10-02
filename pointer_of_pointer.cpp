#include<bits/stdc++.h>
using namespace std;
void fun(int *ptr1, int *ptr2)
{
	int temp = *(ptr1);
	*(ptr1)=*(ptr2);
	*(ptr2)=temp;
	return;
}

int main()
{
	int arr[3];
	arr[0]=100;
	arr[1]=200;
	arr[2]=300;
	int *ptr= arr;
	int *ptr1= ptr;
	cout<<*(ptr)<<"\n";
	cout<<*(ptr1)<<"\n";
	cout<<"addres\n";

	cout<<*(&ptr)<<"\n";
	cout<<*(&ptr1)<<"\n";

	ptr+=1;

	cout<<*(ptr)<<"\n";
	cout<<*(ptr1)<<"\n";

	cout<<"addres\n";

	cout<<*(&ptr)<<"\n";
	cout<<*(&ptr1)<<"\n";


	int a,b;
	cin>>a>>b;
	cout<<"inital val "<<a<<"and "<<b<<" \n";

	fun(&a,&b);	

	cout<<"final val "<<a<<"and "<<b<<"\n";

	return 0;
}