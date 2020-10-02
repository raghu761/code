#include<bits/stdc++.h>
using namespace std;
class Integer{
	int a; 
	public :
	void setdata(int x)
	{
		a =x; 

	}
	void showdata()
	{
		cout<<"a ="<<a<<" \n";
	}

	Integer operator ++() // postincreament 
	{
		Integer result; 
		result.a =a +1;
		a = a+1;
		return result; 
	}
	Integer operator ++(int) // preincremanrt
	{
		Integer result ;
		result .a = a++;
		return result;
	}

};

int main()
{
	Integer i1;
	i1.setdata(3);
	i1.showdata();
	Integer i2;
	i2=i1++;
	i1.showdata();
	i2.showdata();
	return 0;
}