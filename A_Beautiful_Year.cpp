#include <bits/stdc++.h>
using namespace std;

int dist(int o){

    string s=to_string(o);
    set <int>v;
    for(int i=0;i<4;i++)
    {
        v.insert(s[i]-'0');
    }
    int si=v.size();
    return si;
}
int main()
{    
    int n;
    cin>>n;
    int o=n+1;
    int si= dist(o);
    string s=to_string(o);
    bool flag=true;
    while(flag)
    {
        if(si==4)
        {
            int x=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
            flag=false;
            cout<<x;
        }
        else{
            o=o+1;
            si=dist(o);
            s=to_string(o);

        }
    }


}
