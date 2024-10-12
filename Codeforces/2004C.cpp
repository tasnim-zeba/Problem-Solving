#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll a[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int tr = 2;
        ll x=a[n-1];
        for(int i=n-2; i>=0; i--)
        {
            if(k==0)break;
            if(tr==1)
            {
                x=a[i];
                tr = 2;
            }
            else
            {
                ll d = x- a[i];
                if(k>=d)
                {
                    a[i] = x;
                    k=k-d;
                }
                else
                {
                    a[i] = a[i] + k;
                    k=0;
                    break;
                }
                tr = 1;
            }
        }
        ll al = 0, bb = 0;
        tr=1;
        for(int i=n-1; i>=0; i--)
        {
            if(tr==1)
            {
                al = al+a[i];
                tr = 2;
            }
            else if(tr==2)
            {
                bb=bb+a[i];
                tr=1;
            }
        }
        cout<<al-bb<<endl;
    }
}


