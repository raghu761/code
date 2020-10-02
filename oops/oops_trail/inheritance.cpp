#include<bits/stdc++.h>
using namespace std;

class inheritance 
{
	private: 
	int var ;
	public :
	void setdata(int data)
	{
		var = data;
	}
	int getdata()
	{
		return var;
	}

};
class derived : public inheritance{
	private :
	int var1;
	public :
	void setdata1(int data)
	{
		setdata(data);
	}
	int getdata1()
	{
		return getdata();
	}
};


int main()
{

	derived d;
	d.setdata1(4);
	cout<<d.getdata1()<<"\n";

	return 0;

}