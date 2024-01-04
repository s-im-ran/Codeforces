#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int take=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
            take=take+1;
    }
cout<<take;
}