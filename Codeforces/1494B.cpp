#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,u,r,l,d,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>u>>r>>d>>l;
        c=1;
        if(u==n&&d==n)
        {
            if(l>=2&&r>=2);
            else{
                c=0;
            }
        }
        else if(((u==n)&&d==(n-1))||((u==(n-1))&&d==n))
        {
            if((l>=2&&r>=1)||(l>=1&&r>=2));
            else{
                c=0;
            }
        }
        else if(u==(n-1)&&d==(n-1))
        {
            if(l>=2);
            else if(r>=2);
            else if(l>=1&&r>=1);
            else{
                c=0;
            }
        }
        else if((u==(n-1))||(d==(n-1)))
        {
            if(l>0||r>0);
            else{
                c=0;
            }
        }
        else if((u==n)||(d==n))
        {
            if(l>0&&r>0);
            else{
                c=0;
            }
        }
        if(l==n&&r==n)
        {
            if(u>=2&&d>=2);
            else{
                c=0;
            }
        }
        else if(((l==n)&&r==(n-1))||((l==(n-1))&&r==n))
        {
            if((u>=2&&d>=1)||(u>=1&&d>=2));
            else{
                c=0;
            }
        }
        else if(l==(n-1)&&r==(n-1))
        {
            if(u>=2);
            else if(d>=2);
            else if(u>=1&&d>=1);
            else{
                c=0;
            }
        }
        else if((l==(n-1))||(r==(n-1)))
        {
            if(u>0||d>0);
            else{
                c=0;
            }
        }
        else if((l==n)||(r==n))
        {
            if(u>0&&d>0);
            else{
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
    return 0;
}
