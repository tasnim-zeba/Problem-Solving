
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,i,j,ans,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        stack<ll>zero,one;
        c=1;
        vector<ll>v;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(one.empty())
                {
                    zero.push(c);
                    v.push_back(c);
                    c++;
                }
                else
                {
                    ll x=one.top();
                    zero.push(x);
                    v.push_back(x);
                    one.pop();
                }
            }
            else
            {
                if(zero.empty())
                {
                    one.push(c);
                    v.push_back(c);
                    c++;
                }
                else
                {
                    ll x=zero.top();
                    one.push(x);
                    v.push_back(x);
                    zero.pop();
                }
            }
        }
        cout<<c-1<<endl;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
