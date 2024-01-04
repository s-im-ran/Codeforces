#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    set <char> distinct;
    for(int i=0;i<s.size();i++)
    {
        distinct.insert(s[i]);
    }
   // cout<<distinct;

    if(distinct.size()%2!=0)
    {
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
}