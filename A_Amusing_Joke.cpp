#include <bits/stdc++.h> 
using namespace std;
int main(){
 const  int ch=128;
 int c1[128]={0};
 int c2[128]={0};
 int flag=0;
 string s1,s2,string1,string2;
 cin>>s1>>s2>>string2;
 string1=s1+s2;
for(int i=0;i<string1.length();i++)
{
    c1[string1[i]]++;
}

for(int i=0;i<string2.length();i++)
{
    c2[string2[i]]++;
}

for(int i=0;i<128;i++)
{
    if(c1[i]!=c2[i])
    {
        cout<<"NO";
        flag=-1;
        break;
    }
}
if(flag==0)
{
    cout<<"YES";
}


}