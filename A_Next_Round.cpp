#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int cou=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        
    }
        for(int i=1;i<=n;i++)
    {
        
        if(a[i]>=a[k] && a[i]>0)
            cou=cou+1;
    }
    cout<<cou;
}