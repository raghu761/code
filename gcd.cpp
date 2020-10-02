#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	long long int sum = arr[0];
	for(int i=1;i<n;i++)
	{
		sum = __gcd(arr[i] ,(int) sum );

	}
	cout<<sum<<"\n";


	return 0;
}