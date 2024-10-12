#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        c=1;
        for(i=0; i<n-1; i++)
        {
            if(a[i]==-1&&a[i+1]==-1)
            {
                a[i]=a[i+1]=1;
                c=0;
                break;
            }
        }
        if(c)
        {
            for(i=0; i<n-1; i++)
            {
                if(a[i]==-1||a[i+1]==-1)
                {
                    a[i]*=(-1);
                    a[i+1]*=(-1);
                    c=0;
                    break;
                }
            }
        }
        if(c)
        {
           a[0]*=(-1);
           a[1]*=(-1);
        }
        int s=0;
        for(i=0;i<n;i++)s=s+a[i];
        cout<<s<<endl;
    }
}
