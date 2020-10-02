#include<bits/stdc++.h>
using namespace std;
class Car
{
	private :
	int gear;
	 public :

	void gearChange()
	{

	}
	void f2()
	{
		cout<<"this is car \n";
	}
};

class sportsCar : public Car{
	public:
		void gearChange() // method overriding
		{
			cout<<"gear change in sc \n";
		}

		void f2(int x)// method hiding
		{
			cout<<"this is sc \n";
		}

};


int main()
{

	sportsCar sc;
	sc.gearChange();
	sc.f2(2);
	return 0;
}