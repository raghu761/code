// early binding and late binding 
// without using virtual its early biding
//with using virtual its late binding

#include<bits/stdc++.h>
using namespace std;

class base_class{
	private :
	int var1 ;

	public :

	virtual void show()
	{
		cout<<"this is base class\n";
	}
};

class derived_class : public base_class{
	private :
	int var1 ;
	public :
	void show()
	{
		cout<<"this is derived cls \n";
	}
};

int main()
{
	base_class *b;
	derived_class d;
	b=&d;
	b->show();
	return 0;
}