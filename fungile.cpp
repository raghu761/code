#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];

	for(int i=0; i < n; i++ )
	 cin >> arr[i];


	 set<int> st;
	 for(int i=0;i < n;i++)
	 st.insert(arr[i]*arr[i]);

	 vector<int> ans;
	 for(auto a: st)
	 ans.push_back(a);

	 //check display
	cout<<"ans is \n";
	 for(auto a: ans)
	 cout<<a<<" ";
	 cout<<"\n"; 

	return 0;
}