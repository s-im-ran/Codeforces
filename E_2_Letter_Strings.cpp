#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, c = 0;
        cin >> n;

        for (int j = 0; j < n; j++) {
            string s;
            cin >> s;
            if(s[1]=='k')
            {
                c++;
            }
            else{
            if (s[0] <= s[1])
            {

                if((s[1]-s[0]==1) )
            {
                c++;
            }
                else if((s[1]-s[0]==0))
                c++;
            }
            }
        }
        cout << c << endl;
    }
    


}