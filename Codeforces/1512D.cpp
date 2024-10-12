#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,n2,x,mx1,mx2,c1,s,l;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>v;
        vector<ll>::iterator it;
        n2=n+2;
        while(n2--)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        l=v.size();
        c1=1,mx1=v[l-1];
        s=0;
        for(i=0; i<l-1; i++)
        {
            s=s+v[i];
        }
        x=s-mx1;
        it=find(v.begin(),v.end()-1,x);
        if(it==v.end()-1)
        {
            c1=0;
        }
        else
        {
            int g=0;
            for(i=0; i<l-1; i++)
            {
                if(v[i]==x&&g==0){
                    g=1;
                }
                else
                {
                    cout<<v[i]<<" ";
                }
            }
            cout<<endl;
        }
        ///cout<<c1<<endl;
        if(c1==0)
        {
            mx2=v[l-2];
            s=0;
            for(i=0; i<l-2; i++)
            {
                s=s+v[i];
            }
            ///cout<<s<<endl;
            if(s==mx2||s==mx1)
            {
                for(i=0; i<l-2; i++)
                {
                    cout<<v[i]<<" ";

                }
                cout<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
