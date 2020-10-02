#include<iostream>
using namespace std;
void f(int *i)
{
	*i=1;
	return;
}

int main()
{
	int i=0;
	f(&i);
	cout<<"the val is "<<i<<" \n";
	int y=(5>4)==1;
	cout<<"y "<<y<<" \n";

	int x=0;
	for(int i=0;i<10;i++)
	{
		x=x++ + ++x;
		cout<<x<<" ";
		//0 + 2= x=2, 2 + 4 =6 ,8 + 6=14 , 18+20=38 38 + 40 =78 , 78 +80=158 
		if(x>100) break;
	}
	cout<<x<<" \n";

	int n=10;
	for(int i=0;i<n;i++)
	{
		n++;
		continue;
		cout<<"cnt\n";
	}



	return 0;
}