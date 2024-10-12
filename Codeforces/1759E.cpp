#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,h,i,j,b,g,ans1,h1,h2,h3,ans2,ans3;
    cin>>t;
    while(t--)
    {
        cin>>n>>h;
        ll a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ans1=0;
        b=2,g=1;
        h1=h;
        for(i=0; i<n; i++)
        {
            if(h1>a[i])
            {
                ans1++;
                h1=h1+a[i]/2;
            }
            else
            {
                 if(g)
                {
                    h1=h1*3;
                    i--;
                    g--;
                }
                else if(b)
                {
                    h1=h1*2;
                    i--;
                    b--;
                }

            }
        }
        ans2=0;
        b=2,g=1;
        h2=h;
        for(i=0; i<n; i++)
        {
            if(h2>a[i])
            {
                ans2++;
                h2=h2+a[i]/2;
            }
            else
            {
                if(b)
                {
                    h2=h2*2;
                    i--;
                    b--;
                }
                else if(g)
                {
                    h2=h2*3;
                    i--;
                    g--;
                }
            }
        }
        ans3=0;
        b=2,g=1;
        h3=h;
        for(i=0; i<n; i++)
        {
            if(h3>a[i])
            {
                ans3++;
                h3=h3+a[i]/2;
            }
            else
            {
                if(b==2&&g==1)
                {
                    h3=h3*2;
                    i--;
                    b--;
                }
                else if(b==1&&g==1)
                {
                    h3=h3*3;
                    i--;
                    g--;
                }
                else if(b==1&&g==0)
                {
                    h3=h3*2;
                    i--;
                    b--;
                }
            }
        }
        cout<<max(ans1,max(ans2,ans3))<<endl;
    }
}
