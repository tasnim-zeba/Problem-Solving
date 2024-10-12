#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,i,j,e,o,p,f;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        e=o=0;
        f=0;
        for(i=1; i<=n; i++)
        {
            cin>>p;
            if(p%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if(e>=x)
        {
            if(o>0)
            {
                f=1;
            }
        }
        else
        {
            if((x-e)%2!=0)
            {
                f=1;
            }
            else
            {
                if(o>(x-e))
                {
                    f=1;
                }
            }
        }
        if(e==0&&x%2==0)
        {
            f=0;
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
    return 0;
}
