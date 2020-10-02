#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int val ;
	vector<int> v1;

	for(int i=0;i<n;i++)
	{
		cin>>val;
		v1.insert(lower_bound(v1.begin(),v1.end(),val*val),val*val);
	}
	for(auto a:v1)
		cout<<a<<" ";
	cout<<"\n";


	return 0;
}