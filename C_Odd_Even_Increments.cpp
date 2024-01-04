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
        int f=-1;
        int c_odd=0;
        int c_even=0;
        for(int j=0;j<n;j++)
        {
            
            cin>>a[j];
            a[j]=a[j]%2;
           
        }
        for(int j=0;j<n;j++)
        {
            if(a[j]==0)
                c_even++;
            if(a[j]==1)
            
                c_odd++;
            
        }
        if(c_even==n || c_odd==n)
        {
            f=1;
        }

        if(f==-1){
            int flag=1;
            for(int j=0;j<n-1;j++)
            {
                if(a[j]==a[j+1])
                {
                    flag=-1;
                    break;
                }
            }
            if(flag==-1)
                f=-1;
            if(flag==1)
                f=1;
        }
        if(f==1)
            cout<<"YES"<<endl;
        if(f==-1)
            cout<<"NO"<<endl;
     
    }
    }

    
    
    
    

