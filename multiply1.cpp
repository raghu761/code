#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;

	int ans= 0 ;

	if(y > 0)
	for(int i=0;i<y;i++)
		ans+=x;
	else
	{
		y=y*-1;
		for(int i=0 ;i<y;i++)
			ans +=x;
		ans= ans*-1;
	}
	cout<<"ans is "<<ans << "\n";

	return 0;
}