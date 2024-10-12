#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a[102],c,x;
    double d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            d=sqrt((double)a[i]);
            x=d;
            if(x!=d)
            {
                c=1;
            }
        }
        if(c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
