#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    int t,n,m,i,j,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        vector<int>v(8001,0);
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v[a[i]]++;
        }
        /*for(i=0;i<5;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        */
        ans=0;
        for(i=0;i<n-1;i++)
        {
            int s=a[i];
            for(j=i+1;j<n;j++)
            {
                s=s+a[j];
                if(s>8000)continue;
                if(v[s])
                {
                    ans=ans+v[s];
                    v[s]=0;
                }
            }
        }
        /*for(i=0;i<5;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;*/
        cout<<ans<<endl;
    }
}
