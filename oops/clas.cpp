#include<bits/stdc++.h>
using namespace std;
class complex1{
	private : 
	int a,b;

	public :
	void set_data(int x , int y)
	{
		a= x;
		b= y;
	}
	void show_data()
	{
		cout<<"a== "<<a<<" b == "<<b<<"\n";
	}
	complex1 add(complex1 c)
	{
		complex1 temp ;
		temp.a= a+c.a;
		temp.b= b+c.b;
		return temp;
	}
};

int main()
{
	complex1 c1,c2,c3;
	c1.set_data(3,4);
	c2.set_data(5,6);
	c3=c1.add(c2);
	c3.show_data();
	return 0;
}