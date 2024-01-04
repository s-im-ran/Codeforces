#include <bits/stdc++.h>
using namespace std;
int main()

{
    string n1,n2;
    cin>>n1>>n2;
   string s=(n1);
   /* for(int i=0;i<n1;i++)
    {
        s[i]='0';
    }
    int rem1,rem2;*/
     for(int i=0;i<n1.size();i++)
    {
        
        if(n1[i]==n2[i])
        {
            s[i]='0';
        }
        else{
            s[i]='1';
        }

        
    }/*string s2=s;
   int  t=n1/2;
    for(int i=0;i<t;i++)
    {
        s2[i]=s[t-i-1];
    }*/
    cout<<s;

}