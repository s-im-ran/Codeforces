#include <bits/stdc++.h> 
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<int> s;
    int treated=0;
    int policemen=0;
    int untreated=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push_back(x);
        }
     for(int i=0;i<n;i++)
    {
        
        if(s[i]>0)
            policemen=policemen+s[i];
        if(s[i]<0){
            if(policemen>0)
                {
                    treated++;
                    policemen--;
                }
            else
                     untreated++;
            
        }

    }
    cout<<untreated<<endl;
    
    
}
