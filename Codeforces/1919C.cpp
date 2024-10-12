#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sm = n+1, bg = n+1;
        int ans=0;
        for(i=0;i<n;i++)
        {
            if(sm>bg)swap(sm,bg);
            if(a[i]<=sm)
            {
                sm=a[i];
            }
            else if(a[i]<=bg)
            {
                bg=a[i];
            }
            else
            {
                ans++;
                sm=a[i];
            }
        }
        cout<<ans<<endl;
    }
}
