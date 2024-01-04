#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t; cin>>t;
    for(int i=0;i<t;i++)
    {
        long int n; cin>>n;
        long int a[n],sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<n;j++)
        {
            sum=sum+a[j];
        }
        //cout<<sum<<endl;
        vector <int> b;

        if(sum%n==0){
        for(int j=0;j<n;j++)
         {
            b.push_back(sum/n);
         
         }
        }
        
    }
}