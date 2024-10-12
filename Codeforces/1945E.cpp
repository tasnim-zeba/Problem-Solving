#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int p[n+2], idx;
        for(int i=1; i<=n; i++)
        {
            cin>>p[i];
            if(p[i]==x)
            {
                idx = i;
            }
        }
        int l=1, r=n+1;
        while((r-l)>1)
        {
            int m = (l+r)/2;
            if(p[m]<=x)
            {
                l=m;
            }
            else{
                r=m;
            }
        }
        if(p[l]==x)
        {
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<l<<" "<<idx<<endl;
        }
    }
}
