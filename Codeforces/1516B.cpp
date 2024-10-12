#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[2005];
int main()
{
    ll t,n,i,x1,x2,j1,j2,c,c1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        c=0,x1=0;
        for(i=1;i<n;i++)
        {
            x1=x1^a[i];
            if(x1==a[0])
            {
                x1=0;
                c=1;
            }
        }
        x2=0;
        c1=0;
        for(i=0;i<n-1;i++)
        {
            x2=x2^a[i];
            if(x2==a[n-1])
            {
                x2=0;
                c1=1;
            }
        }
        if((x1==0&&c==1)||(x2==0&&c1==1))
        {
            cout<<"YES"<<endl;
        }
        else{
                c=0;
            for(i=1;i<n-1;i++)
            {
                x1=0;
                for(j1=i;j1>=0;j1--)
                {
                    x1=x1^a[j1];
                }
                x2=0;
                c1=0;
                for(j2=i+1;j2<n;j2++)
                {
                    x2=x2^a[j2];
                    if(x2==x1)
                    {
                        x2=0;
                        c1=1;
                    }
                }
                if(x2==0&&c1==1){
                    c=1;
                    break;
                }
            }
            if(c==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}

