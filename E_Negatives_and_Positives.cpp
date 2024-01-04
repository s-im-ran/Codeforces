#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n; cin>>n;
        long long int s[n+1]={0};
        long long int a[n];
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            a[j]=x;
        }
        for(int j=0;j<n;j++)
        {
            s[n]=s[n]+a[j];
        }
        int count=0;
        while(count<n){
        for(int j=0;j<n;j++)
        {
            if(count==j || count+1==j)
                s[count]=-1*a[j]+s[count];
            else
                s[count]=a[j]+s[count];
        
        }
        count+=1;
    }   
        long long int maximum=s[0];
        for(int i=0;i<=n;i++)
        {
            maximum=max(maximum,s[i]);
        }
        cout<<maximum<<endl;
    }
    return 0;
}