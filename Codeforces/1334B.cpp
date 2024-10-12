#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c,m;
    double x,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        double a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        c=0;
        double p;
        s=0;
        m=0;
        for(i=n-1;i>=0;i--)
        {
            s=s+a[i];
            m++;
            if((s/m)<x)
            {
                break;
            }
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
