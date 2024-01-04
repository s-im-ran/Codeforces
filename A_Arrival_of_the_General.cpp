#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    int min=a[0];
    int maxp=0,minp=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            maxp=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
            minp=i;
        }
    }
    
    cout<<s1;
}
