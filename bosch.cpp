#include<iostream>
using namespace std;

bool checkpowOf2(int n)
{
	if(n==1) return true;
	while(n!=1) 
		if(n%2==0)
			n=n/2;
		else
			return false;

		return true;
}

int main()
{
	int n;
	cin>>n;
	long cnt=0,sum=0;
	for(int i=1;i<=n;i++)
	{
		if(checkpowOf2(i)){
			cnt++;
			sum+=i;
		}
	}
	cout<<"cnt is "<<cnt<<" \n";
	cout<<"sum is "<<sum<<" \n";

	return 0;
}