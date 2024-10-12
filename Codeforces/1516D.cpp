#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005],c[100005];
int main()
{
    ll n,q,i,j,l,r,ans,x;
    cin>>n>>q;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        c[i]=-1;
    }
    for(i=2;i<=n;i++)
    {
        for(j=i-1;j>=1;j--)
        {
            if(__gcd(a[i],a[j])!=1)
            {
                c[i]=j;
                break;
            }
        }
    }
   /* for(i=1;i<=n;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;*/
    while(q--)
    {
        cin>>l>>r;
        x=-1;
        ans=0;
        for(i=l+1;i<=r;i++)
        {
            if(c[i]!=-1&&c[i]>=l)
            {
                if(c[i-1]!=-1&&c[i-1]>=l)
                {
                    if((c[i]==i-1)||(c[i]==x)){
                        ans++;
                        x=-1;
                    }
                    else{
                        x=(i-1);
                    }
                }
                else{
                    ans++;
                }
            }
           /// cout<<ans<<" ";
        }
        ///cout<<endl;
        cout<<ans+1<<endl;
    }
    return 0;
    /*12
87986
7 14 5 18 21 8 4 9 1 2 10 5
1 12*/
}
