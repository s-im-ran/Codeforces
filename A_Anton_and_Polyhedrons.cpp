#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;cin>>n;
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        string s;
        
        cin>>s;
        if(s=="Tetrahedron")
            sum=sum+4;
        if(s=="Cube")
            sum=sum+6;
        if(s=="Octahedron")
            sum=sum+8;
        if(s=="Dodecahedron")
            sum=sum+12;
        if(s=="Icosahedron")
            sum=sum+20;
        }
    cout<<sum<<endl;
}