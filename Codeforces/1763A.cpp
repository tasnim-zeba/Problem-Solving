#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,mx,mn,f,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        mx=mn=0;
        for(j=0; j<12; j++)
        {
            f=0,x=0;
            for(i=0; i<n; i++)
            {
                if(a[i]&(1<<j))
                {
                    f=1;
                }
                else
                {
                    x=1;
                }
            }
            if(f)
            {
                mx=mx+(int)pow(2,j);
            }
            if(x==0)
            {
                mn=mn+(int)pow(2,j);
            }
        }
        cout<<mx-mn<<endl;
    }
}
