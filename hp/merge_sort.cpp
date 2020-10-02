#include<iostream>
using namespace std;
//5
//0  1  2  3  4
//50 40 30 20 10
//mid= 2 

void merge_sort_util(int arr[] , int l , int mid , int r)
{
	int n1=mid-l+1;
	int n2=r-mid;

	int l1[n1];
	int l2[n2];

	for(int i=0;i<n1;i++)
		l1[i]=arr[i+l];

	for(int i=0;i<n2;i++)
		l2[i]=arr[mid+1+i];


	int i=0 , j=0;
	int k=l;
	while(i < n1 and j < n2)
	{
		if(l1[i]<l2[j])
			arr[k++]=l1[i++];
		else
			arr[k++]=l2[j++];
	}
	while(i<n1)
		arr[k++]=l1[i++];
	while(j<n2)
		arr[k++]=l2[j++];

	return;
}


void merge_sort(int arr[] , int l , int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		merge_sort(arr,l,mid);
		merge_sort(arr,mid+1,r);
		merge_sort_util(arr,l,mid,r);
	}
}

int main()
{
	int n ;
	cin >> n;
	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	merge_sort(arr,0 , n-1 );

	for(int i=0;i<n;i++)
		cout<<arr[i] <<" ";
	cout<<"\n";


	return 0;
}