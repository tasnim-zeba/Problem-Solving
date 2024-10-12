#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,h,d,i,j,e;
    cin>>t;
    while(t--)
    {
        cin>>n>>d>>h;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        double ans=0.0;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                ans=ans+(d*h)/2.0;
                e=a[i]+h;
            }
            else if(a[i]>=e)
            {
                ans=ans+(d*h)/2.0;
                e=a[i]+h;
            }
            else
            {
                ans=ans+(d*h)/2.0;
                double h1=(double)h-(a[i]-a[i-1]);
                double b1=(d*h1)/(double)h;
                ans=ans-(b1*h1)/2.0;
                e=a[i]+h;
            }
        }
        cout<<fixed<<setprecision(7)<<ans<<endl;
    }
}
