#include <bits/stdc++.h>
using namespace std;
int main()

{   int a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    set<int>s;
    for(int i=0;i<4;i++)
    {
        s.insert(a[i]);
    }
    cout<<4-s.size();


}