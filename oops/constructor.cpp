#include<bits/stdc++.h>
using namespace std;

class complex1
{
	private :
	int a ,b; 

	public :

	complex1(int x, int y)
	{
		a= x;
		b= y;
	}

	complex1()
	{

	}

	complex1(complex1 &c)
	{
		a=c.a;
		b=c.b;
	}
};

int main()
{
	complex1 c;	
	complex1 c2(c);
	return 0;
}