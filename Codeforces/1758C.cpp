#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int a[n+1];
        if(n%x)
        {
            cout<<-1<<endl;
        }
        else
        {
            a[n]=1;
            a[1]=x;
            for(i=2;i<n;i++)
            {
                if(i==x)
                {
                    a[i]=n;
                }
                else
                {
                    a[i]=i;
                }
            }
            for(i=x+1;i<n;i++)
            {
                 if((i%x==0)&&(n%i==0))
                 {
                     swap(a[x],a[i]);
                     x=i;
                 }
            }
            for(i=1;i<=n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}


