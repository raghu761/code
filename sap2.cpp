#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	getline(cin,s1);

	stringstream ss(s1);
	string temp;
	vector<string> v1;

	while(getline(ss,temp,' ')){
		v1.push_back(temp);
	}

	for(int i=0; i < v1.size() ; i++)
	{
		string temp=v1[i];

		if(temp[0]>='A' and temp[0]<='Z') 
		{
			char c= temp[0] + 32;
			temp[0] = c;

		}
		int flag=0;
		if(temp[temp.length()-1 ]>='a' and temp[temp.length()-1 ]<='z')
		{
			char c= temp[temp.length()-1 ]-32;
			temp[temp.length()-1 ]=c;
		}
		else{
			flag=1;
			//continue;
		}
		if(flag==1)
		{
			char last= temp[temp.length()-1];
			temp.pop_back();
			string newtemp;
			newtemp+=last;
			newtemp+=temp;
			temp=newtemp;
		}
		else
		reverse(temp.begin(),temp.end());
		
		v1[i]=temp;

	}

	for(auto a: v1) cout<<a<<" ";
		cout<<"\n";


	return 0;
}