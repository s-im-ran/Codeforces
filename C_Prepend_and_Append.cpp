#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;cin>>n;
        int a=0;
        int b=n-1;
        int ma,mb;
        int f=1;
        string s;cin>>s;
        while(a<=b)
        {
            if(s[a]=='1'&&s[b]=='0'||s[a]=='0'&&s[b]=='1')
            {
                ma=a+1;
                mb=b;
                f=1;
                //break;
            }
            else
            if(s[a]==s[b])
            {
                ma=a;
                mb=b;
                break;
            }
            
            a+=1;
            b-=1;
        
        if(ma==mb && n%2 ==0)
        {
            cout<<0<<endl;
            f=0;
            break;
        }
        }
        if(f==1)  
        cout<<abs(ma-mb)
        +1<<endl;
    }    
    return 0;
}