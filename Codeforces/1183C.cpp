#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q,i,j,k,n,a,b,x,l,r,m;
    cin>>q;
    while(q--)
    {
        cin>>k>>n>>a>>b;
        if(b*n>=k)
        {
            cout<<-1<<endl;
            continue;
        }
        l=0,r=n;
        x=INT_MIN;
        while(l<=r)
        {
            m=(l+r)/2;
            if(((m*a+(n-m)*b)<k)&&(n-m)>=0)
            {
                x=max(x,m);
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        cout<<x<<endl;
    }
}
