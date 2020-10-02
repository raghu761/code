#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

long long int sum=0;
int cnt=0;
for(int i=0;i<n;i++)
{
    int val=arr[i]&(arr[i-1]);
        if(val==0)
        {
        sum+=arr[i];
          cnt++;  
        } 
}

cout<<"sum and cnt is :"<<sum<<" & "<<cnt<<"\n";


return 0;
}
