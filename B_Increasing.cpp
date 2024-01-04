#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        int flag=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        for(int j=0;j<n-1;j++)
        {
            if(a[j]==a[j+1])
            {
                cout<<"NO"<<endl;
                flag=-1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }


    }

}