#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	map<int,int> m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		m[x]++;
	}

	int high_fre=0,ans=0;
	for(auto a:m)
	{
		if(a.second>high_fre){
			high_fre=a.second;
			ans=a.first;
		}
	}
	cout<<"ans is "<<ans<< "\n";	
	return 0;
}