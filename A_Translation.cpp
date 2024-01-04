#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    string t;cin>>t;
    int f=0;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[n-i-1])
        {
            cout<<"NO";
            f=-1;
            break;
        }
        
    }
    if(f==0)
    {
        cout<<"YES";
    }
} 

