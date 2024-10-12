#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,n,i,j,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int a[n+1],sor[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sor[i]=1;
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        int f=1;
        for(i=n-2;i>=0;i--)
        {
            if(f==0)
            {
                sor[i]=0;
            }
            else
            {
                if(a[i]>a[i+1])
                {
                    f=0;
                    sor[i]=0;
                }
            }
        }
        s=0;
        for(i=0;i<n;i++)
        {
            //cout<<a[i]<<" "<<endl;
            if(x<a[i]&&sor[i]==0)
            {
                swap(x,a[i]);
                s++;
            }
           /// cout<<a[i]<<" "<<x<<endl;
        }
        for(i=1;i<n;i++)
        {
            if(a[i]<a[i-1])
            {
                s=-1;
                break;
            }
        }
        ///cout<<endl;
        cout<<s<<endl;
    }
}
