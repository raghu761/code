#include<bits/stdc++.h>
using namespace std;

class Account {
private:
	int balance; 
public :
	static float roi ;
	void setBalance(int n)
	{
		balance = n;
	}
	float getval()
	{
		return roi;
	}

	static void setroi(float f)
	{
		roi = f;
	}
};

float Account:: roi = 3.5f;

int main()
{
	Account a,a1,a2;
	cout<<a.getval()<<"\n";
	cout<<a1.getval()<<" \n"; 
	a2.roi = 5.5f;
	cout<<a1.getval()<<" \n";
	Account::setroi(3);
	cout<<a1.getval()<<" \n";
	
	return 0;
}