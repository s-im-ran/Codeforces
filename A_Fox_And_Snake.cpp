#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a[i][j]='.';
        }
    }

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            {
                a[i][j]='#';
            }
        }
    }
    int c=1,c1=1;

    for(int i=0;i<n;i++)
    {
          
            if(i%2!=0)
            {
                for(int k=1;k<n;k=k+4)
                {
                    a[k][m-1]='#';
                }
                 for(int k=3;k<n;k=k+4)
                {
                    a[k][0]='#';
                }
            
        }
    }

        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }


}