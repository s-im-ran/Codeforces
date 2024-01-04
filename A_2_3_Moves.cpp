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
        if(n==1)
            cout<<2<<endl;
        else{
            int rem=n%3;
            int c=n/3;
            if(rem==2 || rem==1)
            {
                c++;
            }
            cout<<c<<endl;
        }
        
    }

}