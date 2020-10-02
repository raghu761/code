#include<bits/stdc++.h>
using namespace std;
void find(int arr[] , int n)
{
	cout<<"this is new logic \n";
	stack<int> s;
	s.push(0);
	int ans[n]={0};
	for(int i=1;i<n;i++)
	{
		if(s.empty()==true){
			s.push(i);
			continue;
		}
		while(s.empty()==false and arr[s.top()] < arr[i]){
			ans[s.top()] = arr[s.top()];
			s.pop();
		}

		s.push(i);
	}

	while(s.empty()==false)
	{
		ans[s.top()]=-1;
		s.pop();
	}
	cout<<"ans is \n";
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";

	}
	cout<<"\n";
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++ ) cin>>arr[i];

	stack<int> stk;
	
	stk.push(arr[0]);
	for(int i=1;i<n;i++)
	{
		if(stk.empty()==true) {
			stk.push(arr[i]);
			continue;
		}

		while(stk.empty()==false and stk.top() < arr[i])
		{
			cout<<stk.top()<<"-- > "<<arr[i]<<"\n";
			stk.pop();
		}
		stk.push(arr[i]);
	}


	while(stk.empty()==false){
		cout<<stk.top()<<" --> "<<"-1\n";
		stk.pop();
	}

	find(arr,n);
	return 0;
}