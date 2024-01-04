#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a='2';
    int g=1;
    string s;
    cin>>s;
    a=s[1];
    for(int i=0;i<n-1;i++)
    {
        string s;
        cin>>s;
        if(a==s[1])
        {
            a=s[1];
        }
        else{
            g++;
            a=s[1];
        }
        
    }
    cout<<g;
}