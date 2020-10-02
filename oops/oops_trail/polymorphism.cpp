#include<bits/stdc++.h>
using namespace std;

class poly{
	private :
	int var1;

	public :

	void setdata()
	{
		var1 =2 ;
		return; 
	}

	void fun(int a)
	{
		cout<<"this is fun with 1 arg \n";
	}

	void fun(int a , int b) // function overloading
	{
		cout<<"this is fun with 2 arg \n";
	}

	int getdata()
	{
		return var1;
	}

 	poly operator +(poly p) // + overator overloading
 	{
 		poly temp; 
 		temp.var1 = p.var1+ var1; 
 		return temp;
 	}


};



int main()
{
	poly p1 ;
	p1.fun(1);
	p1.fun(1,2);

	p1.setdata(); // object 1 
	poly p2;
	p2.setdata(); // object 2 

	poly p3 ;

	p3 = p1+p2;

	cout<<p3.getdata()<<"\n";


	return 0;
}