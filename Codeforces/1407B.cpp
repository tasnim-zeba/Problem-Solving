#include<bits/stdc++.h>
#include<sys/time.h>
using namespace std;
int a[1005],b[1005],v[1005];
int main()
{
    int t,n,mx,gc,j,i,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v[i]=1;
        }
        gc=0,mx=INT_MIN;
        for(i=0;i<n;i++)
        {
            mx=INT_MIN;
            for(j=0;j<n;j++)
            {
                if(v[j])
                {
                    if(__gcd(gc,a[j])>mx){
                        f=j;
                        mx=__gcd(gc,a[j]);
                    }
                }
            }
            b[i]=a[f];
            v[f]=0;
            gc=mx;
        }
        for(i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
