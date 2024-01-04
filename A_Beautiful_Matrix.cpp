#include <bits/stdc++.h>
using namespace std;
int main()
{   int a[5][5]={0};
    int x1=0,x2=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
        
            if(a[i][j]==1){
                x1=i;
                x2=j;
                break;
            }
        }
    }
    
    int moves=(abs(x1-2)+abs(x2-2));

 
    cout<<moves;
}