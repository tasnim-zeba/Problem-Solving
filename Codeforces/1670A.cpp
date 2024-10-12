#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        x=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                x++;
            }
        }
        c=1;
        for(i=0;i<(x-1);i++)
        {
            if(abs(a[i+1])>abs(a[i]))
            {
                c=0;
            }
        }
        for(i=x;i<(n-1);i++)
        {
            if(abs(a[i+1])<abs(a[i]))
            {
                c=0;
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
}
