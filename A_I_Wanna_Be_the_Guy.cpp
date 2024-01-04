#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    set <int> s1,s2;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        s1.insert(x);
    }

     for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        s2.insert(y);
    }
    set <int> s3(s1);
    
    s3.insert(s2.begin(),s2.end());
    int m=0;
    for(const int& x:s3)
    {
        m=m+x;
    }
    
    int sum=(n*(n+1))/2;
    if(m==sum)
    {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    
    
}