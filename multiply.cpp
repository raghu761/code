#include<iostream>
using namespace std;
int multiply(int x, int y)
{
	if( y == 0 )
		return  0 ;
	if(y >0)
	return x+multiply(x,y-1);
	else	
	return -multiply(x,-y);
}

int main()
{
	int x,y;
	cin>>x>>y;

	int res= multiply(x,y);
	cout<<"res is "<<res<< "\n";

	return 0;
}