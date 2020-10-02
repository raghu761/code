#include<bits/stdc++.h>
using namespace std;
int main()
{
	int first ,second , third;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	first = second = third = INT_MIN;
		
	for(int i=0;i<n;i++)
	{
		if(arr[i] > first)
		{
			third = second;
			second =first ;
			first = arr[i];
		}
		else if(arr[i] > second )
		{
			third =second ;
			second =arr[i];
		}
		else if(arr[i] > third )
		{
			third=arr[i];
		}
	}

	cout<<"first = "<<first<<" second = "<<second <<" third = "<<third<<"\n";	

	return 0;
}