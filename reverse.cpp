#include<iostream>
using namespace std;

void reverse(int arr[], int start , int end)
{
	if(start > end) return ;
	 swap(arr[start],arr[end]);
	 reverse(arr,start+1,end-1);
}
int main()
{
	int n ;
	cin>> n;
	int arr[n];
	
	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<<"actual arr \n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";


	reverse(arr,0,n-1);

	cout<<"after  arr \n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";



	return 0;
}