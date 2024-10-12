#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1], fre[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            fre[i]=0;
        }
        string s;
        cin>>s;
        for(int i=0, j=n-1; i<=j; )
        {
            if(s[i]=='L' && s[j]=='R')
            {
                if(i==0)fre[i]=1;
                else fre[i] = fre[i-1]+1;
                if(j==n-1)fre[j]=1;
                else fre[j] = fre[j+1]+1;
                i++;
                j--;
            }
            else
            {
                if(i==0)fre[i]=0;
                else fre[i]=fre[i-1];
                if(j==n-1)fre[j]=0;
                else fre[j]=fre[j+1];
                if(s[i]=='R')
                {
                    i++;
                }
                if(s[j]=='L')
                {
                    j--;
                }
            }
        }
        ll ans = 0LL;
        for(int i=0; i<n; i++){
            //cout<<fre[i]<<" ";
            ans = ans + fre[i]*a[i];
        }
        cout<<ans<<endl;
    }
}

