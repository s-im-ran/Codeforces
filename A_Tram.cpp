#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     vector<int>v;
     vector<int>v1;
    for(int i=0;i<n;i++)
    {
        int ex,ent;
        cin>>ex>>ent;
        for(int j=0;j<ent;j++)
        {
            v.push_back(1);
        }
        for(int j=0;j<ex;j++)
        {
            v.pop_back();
        }
        int capacity=v.size();
        v1.push_back(capacity);
    }
        int max=0;
       for(int j=0;j<v1.size();j++)
       {
        if(max<v1[j])
            max=v1[j];
       }

    
    cout<<max;
    }

