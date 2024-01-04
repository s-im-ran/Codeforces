#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    float a[n];
    double sum=0.0;
    for(int i=0;i<n;i++)
    {
        double s;
        cin>>s;
        a[i]=s/100;
      
    }
     for(int i=0;i<n;i++)
    {
      
        sum=sum+a[i];
    }
    double c=(sum/n)*100;
    cout<<fixed<<setprecision(12)<<c;

}