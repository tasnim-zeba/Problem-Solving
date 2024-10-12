#include<bits/stdc++.h>
using namespace std;
typedef long ll;
int main()
{
    int t,n,i,j,k,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
       int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n<3)
        {
            cout<<0<<endl;
            continue;
        }
        mx=0;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                int c=0;
                for(k=0;k<n;k++)
                {
                    if(k==i||k==j||((a[k]-a[i])*(k-j))==((a[k]-a[j])*(k-i)))
                    {
                        c++;
                    }
                }
                mx=max(c,mx);
            }
        }
        cout<<n-mx<<endl;
    }
}
