#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int f=0;

        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        
        for(int j=0;j<n;j++)
        {   int c=1;
            for(int k=j+1;k<n;k++)
            {
                if(a[j]==a[k])
                {
                    c++;
                }
            }
            b[j]=c;
        }
        for(int j=0;j<n;j++)
        {
            if(b[j]>=3)
            {
                cout<<a[j]<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<-1<<endl;
        }

        
    }

    return 0;
}
