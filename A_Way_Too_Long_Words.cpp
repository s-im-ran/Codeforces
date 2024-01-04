#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a;
    
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a.size()>10){
          cout<<a[0]+to_string(a.size()-2)+a[a.size()-1];
          cout<<endl;
        }
        else{
            cout<<a;
            cout<<endl;
        }


    }


}