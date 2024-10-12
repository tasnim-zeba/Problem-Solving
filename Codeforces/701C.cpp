#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m,l,r,y,x;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    l=0;
    for(r=0;r<n;r++)
    {
        mp[s[r]]++;
        y=mp[s[r]];
        while(mp[s[l]]>1)
        {
            mp[s[l]]--;
            l++;
        }
        if(y==1)
        {
            m=r-l+1;
        }
        else
        {
            m=min(m,r-l+1);
        }
    }

    cout<<m<<endl;
}
