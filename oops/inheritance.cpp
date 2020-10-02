#include<bits/stdc++.h>
using namespace std;
class arr 
{
	private :
	int a[10];
	public :
	void insert(int index , int val)
	{
		a[index]= val ;
		return;
	}
};
class derived : public  arr{
	private :				
	int top ;
	public :
	void push(int  val )
	{
		insert(top, val);
	}
};

int main()
{

	derived d ;
	d.push(13);
	d.insert(2,12);
	return 0;
}