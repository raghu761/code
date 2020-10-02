#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int fre[10]={0};
	while(n!=0){
		fre[n%10]++;
		n=n/10;
	}
	for(int i=9;i>=0;i--){
		if(fre[i]>0)
		{
			int val=fre[i];
			while(val--){
				cout<<i<<" ";
			}
		}
	}

	return 0;
}