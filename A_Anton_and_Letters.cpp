#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int ch=128;
    int count[ch]={0};
    set<char> s;
    for(int i=0;i<1000;i++)
    {
        cin>>s[i];
    }
    cout<<s.length()<<endl;
    
    
    for(int i=1;i<s.length()-1;i++)
    {
        if(s[i]>='a' && s[i]<='z')
            count[s[i]]++;
            
        
    }
    
    int sum=0;

    for(int i=1;i<s.length()-1;i++)
    {
        
            if(count[s[i]]==1)
               { sum++;
                
               }
    }
    cout<<sum<<endl;
}