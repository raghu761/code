#include<bits/stdc++.h>
using namespace std;
class A
{
	int a ;
	public :
	A(int val )
	{
		a= val ;
	}
	~A()
	{

	}
};

class B: public A
{
	int b; 
	public :

	B(int x, int y) :A(x)
	{
		b= y;
	}
	~B()
	{

	}


};

int main()
{
	B b(2,3);
	
	return 0;
}