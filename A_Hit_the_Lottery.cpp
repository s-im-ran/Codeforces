#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int notes=0;
    while(n!=0)
    {  
        if(n==20 || n==5 || n==1){

            notes=1;
            n=0;
        }
        if(n>1 && n<5)
        {
            notes=notes+n;
            n=0;
        }
        if(n>=20 && n<100)
        {   //int notes=0;
            notes= notes+n/20;
            n=n%20;
            if(n>0)
            {
            notes= notes+n/5;
           n=n%5; 
            }
            if(n<5)
            {
            notes= notes+n/1;
            n=0; 
            }

        }
        if(n>=100)
        {
            if(n>0)
            {
            notes= notes+n/100;
            n=n%100; 
            }
            if(n>=20 && n<100)
        {   //int notes=0;
            notes= notes+n/20;
            n=n%20;
            if(n>0)
            {
            notes= notes+n/5;
            n=n%5; 
            }
            if(n<5)
            {
            
            notes= notes+n/1;
            n=0; 
            }
        }

    }
    }
    cout<<notes;
}

