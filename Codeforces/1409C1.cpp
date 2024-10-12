#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,x,y,i,m,d,f;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        m=n;
        vector<ll>l;
        l.push_back(x);
        l.push_back(y);
        n=n-2;
        if(n>0)
        {
            d=y-x;
            if(n>=d-1)
            {
                for(i=x+1;i<y;i++)
                {
                    l.push_back(i);
                }
                n=n-(d-1);
                i=x-1;
           /// ll c=0;
                while(1)
                {
                 if(n<=0)
            {
            break;
            }
                    if(i>0)
                    {
                        l.push_back(i);
                        i--;
                        n--;
                    }
                    else{
                        break;
                    }
                }

                i=y+1;
                while(n--)
                {
                    l.push_back(i);
                    i++;
                }
            }
            else{
                    f=d;
                for(i=n;i>=1;i--)
                {
                    ll m=i+1;
                    if(d%m==0)
                    {
                         f=d/m;
                         break;
                    }
                }
                for(i=x+f;i<y;i=i+f)
                {
                    l.push_back(i);
                    n--;
                }
                i=x-f;
                while(1)
                {
                    if(n<=0)
                    {
                        break;
                    }
                    if(i>0)
                    {
                        l.push_back(i);
                        n--;
                        i=i-f;
                    }
                    else{
                        break;
                    }
                }

                i=y+f;
                while(n--)
                {
                    l.push_back(i);
                    i=i+f;
                }
            }
        }
        for(i=0;i<l.size();i++)
        {
            cout<<l[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
