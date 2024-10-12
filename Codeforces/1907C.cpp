#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        map<char,int>mp;
        int mx=INT_MIN;
        for(i=0;i<n;i++)
        {
            mp[s[i]]++;
            mx=max(mx,mp[s[i]]);
        }
        if(2*mx>n)
        {
            cout<<n-2*(n-mx)<<endl;
        }
        else if(n%2)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}

