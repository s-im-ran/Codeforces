#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ans;
    for(int i=0;i<k;i++)
    {
        if(n%10!=0)
        {
            ans=n-1;
        }
        else
            ans=n/10;

        n=ans;
    }
    cout<<n;
}