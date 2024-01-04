#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; 
    cin>>s;
    string str;
    int lcount=0,ucount=0;
    for(int i=0;i<s.size();i++)
    {
        {
            if(islower(s[i]))
            {
                lcount++;
            }
            if(isupper(s[i]))
            {
                ucount++;
            }
        }
    }
    if(ucount>lcount)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
       
    }
    if(ucount==lcount || ucount<lcount)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;
      

}