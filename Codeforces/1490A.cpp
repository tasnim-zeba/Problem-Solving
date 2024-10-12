#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,i,x,ans;
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
            if(2*min(a[i],a[i+1])<max(a[i],a[i+1]))
            {
                x=(log10(max(a[i],a[i+1])/min(a[i],a[i+1])))/log10(2);
                if(min(a[i],a[i+1])*(int)pow(2.0,(double)x)==max(a[i],a[i+1]))
                {
                    x--;
                }
                ans=ans+x;
            }
        }
        cout<<ans<<endl;
        ///(int) (pow( 10.0 , str.size()-1 )+EPS)
    }
    return 0;
}
