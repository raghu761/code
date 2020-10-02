#include<bits/stdc++.h>
using namespace std;
int proper_divisors(int n)
{
	int res= 1 ;

	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0){
			if(i==n/i) res+=i;
			else res+= (i + n/i);
		}
	}
	return res;
}

int main()
{
	int n;
	cin>>n;
	cout<<proper_divisors(n)<<"\n";
	return 0;
}