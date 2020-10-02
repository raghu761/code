#include<bits/stdc++.h>
using namespace std;
class A{
	private :
	int a, int b;
	public :

friend A operator +(A, A);
friend A operator -(A);
};

A operator+(A a1, A a2)
{
	A temp;
	temp.a =a1.a+a2.a;
	temp.b= a1.b+a2.b;
	return temp; 
}

//for uniary;
A operator -(A a)
{
	A temp ; 
	temp.a = -a.a;
	temp.b -a.b;
	return temp;
}


int main()
{
	return 0;
}