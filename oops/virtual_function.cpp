#include<bits/stdc++.h>
using namespace std;
class A
{
	public :
	 virtual void fun()
	{
		cout<<"this is from class A \n";
	}
};

class B : public A
{
	public :
	void fun()
	{
		cout<<"this is from class B \n";
	}
};

int main()
{
	// A *p,o1;
	// B o2;
	// p = &o2;
	// p->fun();

	// B *ptrb;
	// A a1;
	// ptrb= &a1;
	// ptrb->fun();

	A *ptr,obj2;
	B obj1;
//	ptr= &obj1;
	ptr= &obj2;
	ptr->fun();
	
	return 0;
}
