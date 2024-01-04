#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int o=0;
       for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            cout<<"HARD";
            break;
        }
        else{
            o++;
        }
    }
    if(o==n)
    {
        cout<<"EASY";
    }
}