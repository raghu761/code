#include<bits/stdc++.h>
using namespace std;
class complex1
{
	private : 
	int a,b;
	public :
	void setData(int x,int y)
	{
		a =x;
		b= y;
	}
	void showdata()
	{
		cout<<"a = "<<a<<" b= "<<b<<"\n";
	}

	friend void fun(complex1 );
};

void fun(complex1 c)
{
	cout<<"sum is "<<c.a+c.b<<"\n";
}


int main()
{
	complex1 c;
	c.setData(1,2);
	c.showdata();
	fun(c);
	return 0;
}