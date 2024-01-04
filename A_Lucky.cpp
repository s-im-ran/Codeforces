#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s1;
        cin >> s1;
        
        int x,y;
        x=((s1[0] - '0') + (s1[1] - '0') + (s1[2] - '0'));
        y=((s1[3] - '0') + (s1[4] - '0') + (s1[5] - '0'));

        if( x==y ) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

