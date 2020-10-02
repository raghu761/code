#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int prime[51];
	for(int i=0; i <51; prime[i]=1 , i++);
	for(int i=2;i<51;i++)
	{
		if(prime[i]==0) continue;
		for(int j=i*i;j<=50;j+=i)
			prime[j]=0;
	}
	for(int i=2;i<=50;i++)
		if(	prime[i]) cout<<i<<" -> "<<prime[i]<<" \n";

	cout<<"another \n";
	for(int i=2;i<51;i++)
	{
		if(isprime(i))
		{
			cout<<i<<" and 1"<<"\n";
		}
	}

	printf((char*)3123);
	


	return 0;
}