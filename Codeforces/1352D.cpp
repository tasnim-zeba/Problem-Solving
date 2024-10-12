#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c,a,b,xa,xb,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ar[n+1];
        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        c=1;
        a=ar[0];
        b=0;
        xa=ar[0];
        i=1,j=n-1;
        m=0;
        while(1)
        {
            if(i>j)
            {
                break;
            }
            if(m%2==0)
            {
                m++;
                xb=ar[j];
                c++;
                while(xb<=xa)
                {
                    j--;
                    if(i>j)
                    {
                        break;
                    }
                    xb=xb+ar[j];
                }
                b=b+xb;
                j--;
            }
            else
            {
                m++;
                xa=ar[i];
                c++;
                while(xa<=xb)
                {
                    i++;
                    if(i>j)
                    {
                        break;
                    }
                    xa=xa+ar[i];
                }
                a=a+xa;
                i++;
            }
        }
        cout<<c<<" "<<a<<" "<<b<<endl;
    }
}
