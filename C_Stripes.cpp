#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char a[8][8];

    for(int i=0;i<t;i++)
    {
        int f=-1;
        for(int j=0;j<8;j++)
        {
            for(int k=0;k<8;k++)
                cin>>a[j][k];
        }

         for(int j=0;j<8;j++)
        {
            for(int k=0;k<8;k++){
               if( a[j][k]=='B')
                {
                    cout<<a[j][k]<<endl;
                    f=0;
                    break;
                }
            }
        }
        if(f==-1){
          for(int j=0;j<8;j++)
        {
            for(int k=0;k<8;k++){
               if( a[k][j]=='R')
                {
                    cout<<a[k][j]<<endl;
                    
                    break;
                }
            }
        }

        
        }
    }
    }

