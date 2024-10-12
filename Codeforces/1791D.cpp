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
        map<char,int>mp1,mp2;
        int a[n+1],b[n+1];
        for(i=0;i<n;i++)
        {
            mp1[s[i]]++;
            a[i]=mp1.size();
        }
        for(i=n-1;i>=0;i--)
        {
            mp2[s[i]]++;
            b[i]=mp2.size();
        }
        int mx=0;
        for(i=0;i<n-1;i++)
        {
            mx=max(mx,a[i]+b[i+1]);
        }
        cout<<mx<<endl;
    }
}
