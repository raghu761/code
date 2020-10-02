#include<bits/stdc++.h>
using namespace std;
class complex1{
	private :
	int a,b;
	public :
	void setdata(int x,int y)
	{a = x, b= y;}
	void showdata()
	{cout<<"a = "<<a<<"b= "<<b<<"\n";}

	complex1 add(complex1 c)
	{
		complex1 temp ;
		temp.a= a+c.a;
		temp.b= b+c.b;
		return temp;
	}
	complex1 operator +(complex1 c)
	{
		complex1 temp ;
		temp.a= c.a+a;
		temp.b= c.b+b;
		return temp;
	}
	void operator -()
	{
		// complex1 temp ;
		// temp.a = -a;
		// temp.b= -b;
		// //return temp;
		a=-a;
		b=-b;
	}
};

int main()
{
	complex1 c1,c2,c3;
	c1.setdata(3,4);
	c2.setdata(5,6);
	// c3 = c1.add(c2);
	// c3.showdata();
	c3 = c1+c2;
	c3.showdata();

	complex1 c10;
	c10.setdata(10,10);
	-c10;
	c10.showdata();	

	return 0;
}