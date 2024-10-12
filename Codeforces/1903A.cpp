#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n+1];
        for(i=1;i<=n;i++)cin>>a[i];
        if(k==1)
        {
            int c=1;
            for(i=1;i<n;i++)
            {
                if(a[i]>a[i+1])c=0;
            }
            if(c==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
            cout<<"YES"<<endl;
    }
}
