#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[102];
int main()
{
    ll t,n,k,i,c,sum;
    double d;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll l=0,r=1e15,m;
        while(l<r)
        {
            m=(l+r)/2;
            c=0;
            sum=a[0]+m;
             for(i=1;i<n;i++)
            {
            d=sum*k/100.0;
            if(a[i]>d)
            {
                c=1;
                break;
            }
            sum+=a[i];
            }
            if(c==0){
                r=m;
            }else{
                l=m+1;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}
