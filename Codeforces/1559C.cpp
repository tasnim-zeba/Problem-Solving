#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c1,c0,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        c0=c1=1;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                c1=0;
            }
            else
            {
                c0=0;
            }
        }
        if(c0==1&&c1==0)
        {
            for(i=1; i<=n+1; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else if((c0==0&&c1==1)||a[0]==1)
        {
            cout<<n+1<<" ";
            for(i=1; i<=n; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            int x,y;
            for(i=0;i<n-1;i++)
            {
                if(a[i]==0&&a[i+1]==1)
                {
                    x=i+1;
                    y=i+2;
                    break;
                }
            }
            for(i=1; i<=n; i++)
            {
                if(i==x)
                {
                    cout<<i<<" "<<n+1<<" ";
                }
                else{
                    cout<<i<<" ";
                }

            }
            cout<<endl;

        }

    }
}
