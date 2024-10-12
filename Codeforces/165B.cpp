#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,s,l,r,m,d;
    cin>>n>>k;
    l=0,r=n;
    while(l<r)
    {
        m=(l+r)/2;
        d=m;
        s=0;
        while(d)
        {
            s=s+d;
            d=d/k;
        }
        if(s>=n)
        {
            r=m;
        }
        else
        {
            l=m+1;
        }
    }
    cout<<r<<endl;
}
