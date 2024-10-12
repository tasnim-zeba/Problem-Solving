#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,d;
    double f;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if((k%(n-1)==0)||(n%(n-1)==0))
        {
            if((n%(n-1)==0))
            {
                d=n/(n-1);
                d=d*k;
                d--;
            }
            else
            {
                d=k/(n-1);
                d=d*n;
                d--;
            }
        }
        else
        {
            f=(double)n/(n-1);
            d=f*k;
        }
        cout<<d<<endl;
    }
    return 0;
}
