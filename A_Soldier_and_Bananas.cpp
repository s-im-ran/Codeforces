#include <bits/stdc++.h>
using namespace std;
int main()
{
    int firstprice,amount,nobanana;
    cin>>firstprice>>amount>>nobanana;
    int sum=0;
    for(int i=1;i<=nobanana;i++)
    {
        sum=sum+i*firstprice;
    }
if(sum-amount>0){
cout<<sum-amount;
}
else
    cout<<0;



}