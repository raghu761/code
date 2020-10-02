#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s1;
    cin>>s1;
    vector<string> res;
    string temp;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='.')
        {
            res.push_back(temp);
            cout<<"temp "<<temp<<" \n";
            temp.clear();
        }
        else
        {
            temp+=s1[i];
            
        }
    }
    res.push_back(temp);
    
    
    
    //check 
    for(auto a: res) cout<<a<<" ";
    cout<<"\n";
    
    string ans;
    for(int i=res.size()-1 ; i >=0; i--)
    {
        ans+=res[i];
        ans+='.';
    }
    ans.pop_back();
    cout<<ans<<"\n";
	return 0;
}