#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int main()
{
    ll t,n,k,i,j,ans,c,q,l,r,x,sz,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>c>>q;
        cin>>s;
        vector<ll>mx;
        vector<ll>idx;
        x=n;
        sz=c;
        while(c--)
        {
            cin>>l>>r;
            idx.push_back(r);
            x=x+(r-l)+1;
            mx.push_back(x);
        }
        /*for(i=0;i<sz;i++)
        {
            cout<<mx[i]<<" "<<idx[i]<<endl;
        }
        */
        while(q--)
        {
            cin>>k;
            if(k<=n)
            {
                cout<<s[k-1]<<endl;
                continue;
            }
            i=sz-1;
            while(1)
            {
                if(i==0)
                {
                    d=mx[i]-k;
                    if((idx[i]-d)<=n)
                    {
                        cout<<s[idx[i]-d-1]<<endl;
                        break;
                    }
                    else
                    {
                        k=idx[i]-d;
                    }
                }
                else if(mx[i]==k||(mx[i-1]<k))
                {
                    d=mx[i]-k;
                    if((idx[i]-d)<=n)
                    {
                        cout<<s[idx[i]-d-1]<<endl;
                        break;
                    }
                    else
                    {
                        k=idx[i]-d;
                    }
                }
                i--;
            }
        }
    }
}
