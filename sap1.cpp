#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>m>>n;

	long long int sum=0;


	for(int i=m;i<=n;i++)
	{

		int temp=i;
		while(temp!=0)
		{
			int lastdigit= temp%10;
			sum+=lastdigit;
			temp=temp/10;
		}


	}
	cout<<"sum is "<<sum<<" \n";


	return 0;
}