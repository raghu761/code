#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<n;i++)
	{
		int index=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[index])
				index=j;
		}
		swap(arr[index],arr[i]);
	}

	cout<<"display : \n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";

	return 0;
}