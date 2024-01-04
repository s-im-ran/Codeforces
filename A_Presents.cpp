#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int v[n],v1[n];
   for(int i=0;i<n;i++)

{
    cin>>v[i];
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++){
        if(i+1==v[j])
        {
            v1[i]=j+1;
        }
    }
}
  
   for(int i=0;i<n;i++)

{
    cout<<v1[i]<<" ";
}
}