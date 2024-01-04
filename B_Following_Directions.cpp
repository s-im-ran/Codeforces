#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int l;
        cin>>l;
        string s;
        cin>>s;
        int f=0;
        int a[2]={0,0};
       
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='U')
                {
                        a[1]=a[1]+1;
                        if(a[0]==1 &&a[1]==1)
                        {
                                cout<<"YES"<<endl;
                                f=1;
                                break;
                              
                        }      
                }
             if(s[i]=='D')
                {
                        a[1]=a[1]-1;
                        if(a[0]==1 &&a[1]==1)
                        {
                                cout<<"YES"<<endl;
                                f=1;
                                break;
                              
                        }      
                }
               if(s[i]=='L')
                {
                        a[0]=a[0]-1;
                        if(a[0]==1 &&a[1]==1)
                        {
                                cout<<"YES"<<endl;
                                f=1;

                                break;
                              
                        }      
                }
                if(s[i]=='R')
                {
                        a[0]=a[0]+1;
                        if(a[0]==1 &&a[1]==1)
                        {
                                cout<<"YES"<<endl;
                                f=1;
                                break;
                              
                        }      
                }
        
    }
    if(f==0)
        cout<<"NO"<<endl;
    
}

}