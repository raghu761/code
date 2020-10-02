#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;

	//n =3 
	//m =5 
	int ans =0; 
	while(1)
	{
		if(n==m or n<=0 or m<=0 )
			break;

		if(n > m )
		{
			n=n-m;
		}
		else
		{
			m = m-n;
		}
		ans++;
	}
	cout<<"ans "<<ans<<"\n";

	return 0;
}