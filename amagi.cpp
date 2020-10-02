#include<bits/stdc++.h>
using namespace std;



int main()
{
	int n;
	cin>>n; 
	vector<int> negative,postive ;
	int cnt_zero = 0;
	
	for(int i=0;i<n;i++)
	{
		int x; 
		cin>>x;
		if( x< 0 )
			negative.push_back(x);
		else if( x==0)
			cnt_zero++;
		else
			postive.push_back(x);
	}

	cout<<"ans is \n";

	for(int i=0;i<negative.size();i++)
		cout<<negative[i]<<" ";
	for(int i=0;i<cnt_zero;i++)
		cout<<"0 ";
	for(int i=0;i<postive.size();i++)
		cout<<postive[i]<<" ";
	cout<<"\n";


	return 0;
}