#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,s,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        s=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        int f=0;
        for(i=0; i<n; i++)
        {
            x=s-a[i];
            if(x%(n-1)==0&&(x/(n-1))==a[i])
            {
                f=1;
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
