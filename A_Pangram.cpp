#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>v;
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
    }
    
    if(n<26)
    {
        cout<<"NO"<<endl;
    }
    else{
        for(int i=0;i<n;i++)
        {
            v.insert(s[i]);
        }
        
        if(v.size()==26)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}