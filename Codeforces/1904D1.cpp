#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1], b[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int ok=1;
        for(i=0; i<n; i++)
        {
            int f=-1;
            for(j=i; j>=0; j--)
            {
                if(a[j]==b[i])
                {
                    f=1;
                    break;
                }
                if(b[i]<a[j] || b[i]>b[j])
                {
                    f=0;
                    break;
                }
            }
            if(f==1)continue;
            f=-1;
            for(j=i; j<n; j++)
            {
                if(a[j]==b[i])
                {
                    f=1;
                    break;
                }
                if(b[i]<a[j] || b[i]>b[j])
                {
                    f=0;
                    break;
                }
            }
            if(f!=1)
            {
                ok=0;
            }
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
