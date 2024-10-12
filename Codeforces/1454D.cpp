#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        for(i=2; i*i<=n; i++)
        {
            if((n%i)==0)
            {
                c=i;
                break;
            }
        }
        if(c==0)
        {
            cout<<1<<endl;
            cout<<n<<endl;
            continue;
        }
        x=n;
        vector<ll>v;
        while(1)
        {
            while(x%c==0)
            {
                x=x/c;
                if(x%c==0)
                {
                     v.push_back(c);
                }
                else
                {
                    x=x*c;
                    break;
                }
            }
            ///cout<<c<<endl;
            int p=0;
            for(i=2; ;i++)
            {
                ll o=c*i;
                if(x%o==0)
                {
                    c=o;
                    break;
                }
                if(o>x)
                {
                    v.push_back(x);
                    p=1;
                    break;
                }
            }
            if(p==1)break;
        }
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
