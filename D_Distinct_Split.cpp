#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int count[26]={0};
        int fcount=0;
        string s; cin>>s;
        for(int i=0;i<n;i++)
        {
            count[s[i]]+=1;
        }
       for(int i=97;i<123;i++)
       {
        if(count[i]==1)
            fcount+=1;
        if(count[i]>=2)
            fcount+=2;
       }
       cout<<fcount<<endl;
    }
    return 0;
}