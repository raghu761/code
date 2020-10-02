#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001

vector<string> lst[MAX];

void insert(string s1)
{
	long long int asci=0;
	for(int i=0;i<s1.length();i++)
		asci+=s1[i];

	cout<<"asci "<<asci<<" \n";

	lst[asci].push_back(s1);
}

bool find(string s1)
{
	long long int asci= 0;
	for(int i=0;i<s1.length();i++)
		asci+=s1[i];

	for(auto temp : lst[asci])
		if(temp==s1)
			return true;
	return false;
}

void remove_(string s1)
{
	long long int asci= 0;
	for(int i=0;i<s1.length();i++)
		asci+=s1[i];

	int cnt=0;
	for(auto temp : lst[asci])
	{	if(temp==s1)
		{
			lst[asci].erase(lst[asci].begin()+cnt);
		}
		cnt++;
	}
}

int main()
{	
	int n=5;
	while(n--)
	{
		string temp;
		cin>>temp;
		insert(temp);
	}
	while(1)
	{
		cout<<"Enter string to find \n";
		string temp;
		cin>>temp;
		cout<<"bool "<<find(temp)<<" \n";
		
		cout<<"Enter  num \n";
		int num ;
		 cin>>num ;

		 if(num==99)
		 {
		 	string temp;
		 	cin>>temp;
		 	remove_(temp);
		 }

	}

	return 0;
}