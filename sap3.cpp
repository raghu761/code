#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map<string, int > m;

	while(n--)
	{
		string temp;
		 cin>>temp;
		 m[temp]++;

	}

	cout<<"disaply map \n";
	for(auto a : m )
	{
		cout<<a.first << " " <<a.second <<"\n ";
	}


	while(1)
	{
		string temp;
		cin>>temp;

		if(m.find(temp)!=m.end())
		{
			cout<<"element found \n";
		}
		else
			cout<<"element not found \n";
	}


	return 0;
}