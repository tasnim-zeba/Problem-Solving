#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,j,l,r,m,c,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        cin>>s;
        j=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                m=min(i-j,k);
                swap(s[i],s[i-m]);
                k=k-m;
                j++;
            }
        }
        cout<<s<<endl;
    }
}
