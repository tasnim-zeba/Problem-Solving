#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll e,n,i,res,r,pq;
    cin>>e;
    while(e--)
    {
        cin>>n;
        string s;
        cin>>s;
        res=0,r=s[0]-'0',pq=1;
        for(i=0; i<n; i=i+2)
        {
            if(s[i]!=s[i+1])res++;
            else
            {
                if(r!=s[i]-'0')
                {
                    pq++;
                }
                r=s[i]-'0';
            }
            ///cout<<pq<<endl;
        }
        ///cout<<s<<endl;
        cout<<res<<" "<<pq<<endl;
    }
    return 0;
}

