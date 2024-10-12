#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x,y,i,j,t,d,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        d=y-x;
        list<ll>l;
        list<ll>::iterator it;
        if((d+2)>=n)
        {
            for(i=x;i<=y;i++)
            {
                l.push_back(i);
            }
            ///c=l.size();
            if(l.size()<n)
            {
                i=x-1;
                while(1)
                {
                    if(i<1||l.size()==n)
                    {
                        break;
                    }
                    l.push_front(i);
                    i--;
                }
                if(l.size()<n)
                {
                    i=y+1;
                while(1)
                {
                    if(l.size()==n)
                    {
                        break;
                    }
                    l.push_back(i);
                    i++;
                }
                }
            }

        }
        else
        {
            if(n==2)
            {
                l.push_back(x);
                l.push_back(y);
            }
        }
    }
}
