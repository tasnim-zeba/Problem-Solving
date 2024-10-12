#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int a[x+1];
        for(int i=0; i<x; i++)
        {
            cin>>a[i];
        }
        sort(a, a+x);
        int ans = x-2;
        for(int i=0;i<x-1; i++)
        {
            if(a[i+1]==(a[i]+2))
            {
                ans++;
            }
        }
        if((a[x-1]==(n-1)&&a[0]==1)||(a[x-1]==n && a[0]==2))
        {
            ans++;
        }
        cout<<ans<<endl;
    }
}
