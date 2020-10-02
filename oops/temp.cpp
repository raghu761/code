#include<bits/stdc++.h>
using namespace std;
class temp {
	public :
	 virtual void fun()
	{
		cout<<"this is fun \n";
	}
};

int main()
{
	temp *t,obj;
	//t->fun();
	obj.fun();
	return 0;
}