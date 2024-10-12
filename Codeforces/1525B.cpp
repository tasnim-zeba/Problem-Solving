#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int c=1;
        for(i=1;i<n;i++)
        {
            if((a[i+1]-a[i])!=1)
            {
                c=0;
            }
        }
        if(c==1)
        {
            cout<<0<<endl;
        }
        else
        {
            if(a[1]==1||a[n]==n)
            {
                cout<<1<<endl;
            }
            else if(a[1]==n&&a[n]==1)
            {
                cout<<3<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
    }
    return 0;
}
