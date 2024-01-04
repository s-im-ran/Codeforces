#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int steps;
    if(n%5==0)
    {
        steps=n/5;
    }
    else{
        if(n<5)
        {
            steps=1;
        }
        if(n>5)
        {
            steps=n/5;
            n=n/5;
            steps=steps+1;
        }
    }
    cout<<steps;
}