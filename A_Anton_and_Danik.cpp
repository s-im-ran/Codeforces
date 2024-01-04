#include <bits/stdc++.h>
using namespace std;

int main()
{
    long  int n;
    cin>>n;
    string s;
    cin>>s;
    int c_a=0,c_d=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
            c_a++;
         if(s[i]=='D')
            c_d++;
    }
    if(c_a>c_d)
    {
        cout<<"Anton"<<endl;
    }
    if(c_d>c_a)
    {
        cout<<"Danik"<<endl;
    }
    if(c_d==c_a)
        cout<<"Friendship"<<endl;
}