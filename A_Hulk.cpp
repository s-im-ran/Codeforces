#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    string s="";
     if(n<=0)
        cout<<s;
    else{
        s="I hate";
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                s+=" that I love";
            }
            if(i%2!=0)
            {
                s+=" that I hate";
            }
        }
   
    cout<<s<<" it";
    
    }
    
}

