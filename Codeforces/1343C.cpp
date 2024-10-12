#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,c,s,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
            s=0;
            c=0;
            mx=INT_MIN;
            for(i=0;i<n;i++)
            {
                if(a[i]>0)
                {
                    if(i!=0&&c==-1)
                    {
                        s=s+mx;
                        mx=INT_MIN;
                    }
                    mx=max(mx,a[i]);
                    c=1;
                }
                else
                {
                    if(i!=0&&c==1)
                    {
                        s=s+mx;
                        mx=INT_MIN;
                    }
                    mx=max(mx,a[i]);
                    c=-1;
                }
            }
            s=s+mx;
            cout<<s<<endl;
    }
    return 0;
}
