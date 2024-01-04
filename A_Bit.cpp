#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        for(int j=0;j<a.size();j++)
        {
            if(a[j]=='+'&& a[j+1]=='+')
                x=x+1;
            else{
                if(a[j]=='-'&& a[j+1]=='-')
                x=x-1;
            }
        }



    }
    cout<<x;
}