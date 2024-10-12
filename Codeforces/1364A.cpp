#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,x,i,s,m1,m2,s1,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        ll a[n+1];
        s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s%x)
        {
            cout<<n<<endl;
        }
        else
        {
            s1=s;
            m1=m2=0;
            for(i=0;i<n;i++)
            {
                s1-=a[i];
                if(s1%x)
                {
                    break;
                }
            }
            if(i==n);
            else
            {
                m1=n-i-1;
            }
            for(j=n-1;j>=0;j--)
            {
                s-=a[j];
                if(s%x)
                {
                    break;
                }
            }
            if(j<0);
            else
            {
                m2=j;
            }
            if(i==n&&j<0)
            {
                cout<<-1<<endl;
            }
            else
            {
                ///cout<<m1<<" "<<m2<<endl;
                cout<<max(m1,m2)<<endl;
            }

        }
    }
    return 0;
}
