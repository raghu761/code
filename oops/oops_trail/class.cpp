#include<bits/stdc++.h>
using namespace std;
class cls{
private:
	int var1 ,var2;
	public:
	cls(int var1 , int var2)
	{
		this->var1 = var1 ;
		this->var2 = var2 ;
	}

	int getsum()
	{
		return var2+var1;
	}
};

int main()
{
	cls c(2,4);
	cout<<c.getsum()<<"\n";
	return 0;
}