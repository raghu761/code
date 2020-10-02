#include<bits/stdc++.h>
using namespace std;

void second_largest11(int arr[] , int n)
{
	int first = INT_MIN , second = INT_MIN , first_max=INT_MIN , second_max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>first_max){
			first=i;
			first_max=arr[i];
		}


		if(arr[i]>=second_max and arr[i]!=first_max){
			second=i;
			second_max=arr[i];
		}
	}
	if(second_max==INT_MIN)
		second_max=arr[n-2];


	cout<<"first_max "<<first_max<<" and "<<"second_max "<<second_max<<" \n";

	return;
}

void second_largest12(int arr[] , int n)
{
	int first_max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]> first_max) {
			first_max = arr[i];
		}
	}
	cout<<"first_max "<<first_max<<" \n"; 
	int second_max=INT_MIN ;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>second_max and arr[i] != first_max){ 
			second_max=arr[i];			
		}
	}
	cout<<"second largerst is "<<second_max<< "\n";

}

int main()
{
	int n ;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
		cin>>arr[i];

//	second_largest11(arr,n);
	second_largest12(arr,n);
//	second_largest13(arr,n);
	return 0;
}