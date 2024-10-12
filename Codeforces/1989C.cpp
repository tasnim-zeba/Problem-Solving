#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1], b[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n; i++)
        {
            cin>>b[i];
        }
        int r1=0, r2=0, c=0, f=0;
        for(int i=1; i<=n; i++)
        {
            if(a[i]==1 && b[i]==1)
            {
                f++;
            }
            else if(a[i]==1)r1++;
            else if(b[i]==1)r2++;
            else if(a[i]==0 || b[i]==0)continue;
            else
            {
                c++;
            }
        }
        if(r1<r2)
        {
            swap(r1,r2);
        }
        if(f<=(r1-r2))
        {
            r2+=f;
        }
        else
        {
            f=f-(r1-r2);
            r2=r1;
            if(f%2==0)
            {
                r1+=(f/2);
                r2+=(f/2);
            }
            else{
                r1+=(f/2)+1;
                r2+=(f/2);
            }
        }
        if(c<=(r1-r2))
        {
            cout<<r2<<endl;
        }
        else
        {
            c=c-(r1-r2);
            if(c%2==0)
            {
                cout<<r2-(c/2)<<endl;
            }
            else
            {
                cout<<r2-(c/2)-1<<endl;
            }
        }
    }
}
