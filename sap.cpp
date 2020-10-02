#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	getline(cin,s1);

	stringstream ss(s1);
	string temp;

	vector<string> v1;

	while(getline(ss,temp,' '))
	{
		v1.push_back(temp);
	}



	for(int i=0;i<v1.size();i++)
	{
		string temp=v1[i];
		//caps 65 small 97 
		char c;
		if(temp[0]>='A' and temp[0]<='Z'){
		 c = temp[0]+32;
		temp[0]=c;
		}
		else if(temp[0]>='a' and temp[0]<='z')
		{

		}
		else
			continue;


		if(temp[temp.length()-1 ]>='a' and temp[temp.length() - 1] <='z'){
		c= temp[temp.length()-1]-32;
		temp[temp.length()-1 ] =c ;
		}
		else
			

		reverse(temp.begin(),temp.end());
		v1[i]=temp;
	}



	//cout<<"vector </> \n";
	for(auto a : v1) cout<<a<<" ";
		cout<<"\n";


	return 0;
}