#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);

	string s1;
	int flag;
	for(int i=0;i<s.length();i++)
	{
		cout<<i<<" ";
		if(s[i]!=' ')
		{
			cout<<s[i];
			flag=1;
			s1+=s[i];
		}
		else if(flag)
		{
				 flag=0;
			s1+=s[i];
		}
	}
	cout<<"\n"<<s1<<endl;
}