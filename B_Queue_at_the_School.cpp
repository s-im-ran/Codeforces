#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string a;
    cin>>a;
    string b=a;
    for(int j=0;j<t;j++){
    for(int i=0;i<n-1;i++)
    {
        if(a[i]=='B' && a[i+1]=='G')
        {
            b[i]='G';
            b[i+1]='B';
            i=i+1;
        }
        else
            b[i]=a[i];
            
    }
    a=b;
    }
   cout<<a;
}