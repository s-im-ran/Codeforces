#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t; cin>>t;
    for(int i=0;i<t;i++)
    {
       long long  int a,b;
        cin>>a>>b;
        long long int mov=0;
        int rem=a%b;
        if(rem==0)
        {
            cout<<0<<endl;
        }
        else{
        mov=b-rem;
        cout<<mov<<endl;
        }
    }
} 
