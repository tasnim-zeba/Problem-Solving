
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll e,l1,r1,l2,r2,ans;
    cin>>e;
    while(e--)
    {
        cin>>l1>>r1>>l2>>r2;
        if(l1<l2)
        {
            if(r1>=l2)
            {
            ans=l2;
            }
            else
            {
                ans=l1+l2;
            }
        }
        else if(l2<l1)
        {
            if(r2>=l1)
            {
            ans=l1;
            }
            else
            {
                ans=l1+l2;
            }
        }
        else
        {
            if(r1>=l2)
            {
            ans=l2;
            }
            else if(r2>=l1)
            {
            ans=l1;
            }
            else
            {
            ans=l1+l2;
            }
        }
        cout<<ans<<endl;
    }
}
