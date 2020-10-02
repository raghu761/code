#include<bits/stdc++.h>
using namespace std;
class Box
{
	private :
	int l , b, h;
	public :
	void set(int x,int y, int z)
	{l =x,b=y,h= z;}
	void get()
	{
		cout<<l<<" "<<b<<" "<<h<<"\n";
	}

};


int main()
{
	Box b;
	Box *p=&b;
	p->set(1,2,3);
	p->get();
	return 0;
}