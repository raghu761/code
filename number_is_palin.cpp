#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	string temp ;

	while(n!=0 )
	{
		int lastdigit= n%10;
		char c= lastdigit+'0';
		temp+=c;
		n=n/10;
	}

	int flag=0; 
	cout<<"temp is "<<temp<<" \n";
	for(int i=0;i<(temp.length())/2;i++)
	{
		if(temp[i]!= temp[temp.length()-1 -i ])
		{
			flag=1 ;
			break;
		}

	}

	if(flag == 0 )
		cout<<" plain \n";
	else
		cout<<"no palin \n";


	return 0;
}