#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,i,x,ans,p;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ans=0;
        for(i=0;i<n-1;i++)
        {
            int mn=min(a[i+1],a[i]);
            int mx=max(a[i+1],a[i]);
            if(2*mn<mx)
            {
                p=mn;
                x=0;
                while(1)
                {
                    p=p*2;
                    x++;
                    if(p>=mx)
                    {
                        x--;
                        ans=ans+x;
                        //cout<<x<<" ";
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

