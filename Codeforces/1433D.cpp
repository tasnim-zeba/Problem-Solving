#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,c,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        c=1,f=0;
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]!=a[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
        }
        if(f==0)
        {
            c=0;
        }
        if(c==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            int x;
            for(i=1; i<n; i++)
            {
                if(a[0]!=a[i])
                {
                    x=i;
                    break;
                }
            }
            for(i=1; i<n; i++)
            {
                if(a[0]==a[i])
                {
                   cout<<x+1<<" "<<i+1<<endl;
                }
                else
                {
                    cout<<1<<" "<<i+1<<endl;
                }
            }
        }
    }
}
