#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,m;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.size();
        map<char,int>mp;
        m=0;
        for(i=0;i<n;i++)
        {
            if(mp[s[i]]==0)
            {
                mp[s[i]]++;
            }
            else
            {
                m=m+2;
                mp.clear();
            }
        }
        cout<<n-m<<endl;
    }
    return 0;
}
