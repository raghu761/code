#include<bits/stdc++.h>
using namespace std;
#define MAX 100001

vector<int> lst[MAX];
int maxD , maxNode; 
int visisted[MAX];

void dfs( int node , int dist) 
{
	if(maxD > dist ) maxD = dist , maxNode = node; 
	for(auto child : lst[ node ])
	{
		if(visisted[child] == 0 )
		{
			visisted[child] =1 ;
			dfs(child , dist +1 );
		}
	}
}

int main()
{	
	int nodes ;
	 cin>> nodes;
	 int connections =  nodes -1 ;
	 for(int i=0; i <connections ; i++)
	 {
	 	int u ,v;
	 	 cin>>u>>v;
	 	 lst[u].push_back(v);
	 	 lst[v].push_back(u);
	 }

	 maxD = -1 ;
	 dfs(1, 0);

	return 0;
}