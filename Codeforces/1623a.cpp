#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,r1,c1,r2,c2;
    cin>>t;

    while(t--)
    {
        cin>>n>>m>>r1>>c1>>r2>>c2;
        int dr=1,dc=1;
        int ans=0;
        while(r1!=r2&&c1!=c2)
        {
            if(r1+dr<1||r1+dr>n)
            {
                dr*=-1;
            }
            if(c1+dc<1||c1+dc>m)
            {
                dc*=-1;
            }
            r1+=dr;
            c1+=dc;
            ans++;
        }
        cout<<ans<<endl;
    }
}
