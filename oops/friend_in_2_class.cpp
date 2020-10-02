#include<bits/stdc++.h>
using namespace std;
class B;
class A
{
	private :
	int a;
	public :
	void setval(int x)
	{
		a =x;
	}
	friend void fun(A,B);
};


class B
{
	private :
	int b;
	public :
	void setval(int x)
	{
		b =x;
	}
	friend void fun(A,B);
};
void fun(A o1 , B o2)
{
	cout<<"su m is "<<o1.a+o2.b<<"\n";
}

int main()
{
	A a;
	a.setval(2);
	B b;
	b.setval(3);
	fun(a,b);

	return 0;
}