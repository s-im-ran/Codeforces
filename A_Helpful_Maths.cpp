#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0)
        {
            v.push_back(s[i]-'0');
        }

    }
    sort(v.begin(),v.end());
    
    for(int k=0;k<v.size()-1;k++)
    {
        cout<<v[k]<<"+";
    }
    cout<<v[v.size()-1];
}