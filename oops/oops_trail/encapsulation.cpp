//hiding the data from the user
#include<bits/stdc++.h>
using namespace std;
class base_class {
	private :
	int total ;


	public :
	base_class()
	{
		total = 0;
	}

	void add_data(int data)
	{
		total += data;
	}

	int getdata()
	{
		return total;
	}
};

int main()
{
	base_class b;
	b.add_data(10);
	b.add_data(30);
	b.add_data(40);
	cout<<b.getdata()<<"\n";
	return 0;
}