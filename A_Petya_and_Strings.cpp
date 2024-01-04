#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    string str3=str1,str4=str2;
    for(int i=0;i<str2.size();i++)
    {
        str3[i]=tolower(str1[i]);
        str4[i]=tolower(str2[i]);
    }
    
    if(str3>str4)
        cout<<1;
    if(str3<str4)
        cout<<-1;
    if(str3==str4)
        cout<<0;
}