#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,p,i,j;
    cin>>t;
    string S="";
    while(t--)
    {
        string s;
        cin>>s;
        cin>>p;
        n=s.size();
        ll cnt=n,len;
        while(p>cnt)
        {
            p=p-cnt;
            cnt--;
        }
        ll k=n-cnt;
        stack<int>st;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            if(k==0)break;
            while(st.size()&&s[st.top()]>s[i]&&k)
            {
                v.push_back(st.top());
                st.pop();
                k--;
            }
            st.push(i);
        }
        while(st.size())
        {
            if(k==0)break;
            v.push_back(st.top());
            st.pop();
            k--;
        }
        for(i=0;i<v.size();i++)
        {
            s[v[i]]='*';
        }
        ll c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]!='*')
            {
                c++;
                if(c==p)
                {
                    S+=s[i];
                    break;
                }
            }
        }
    }
    cout<<S<<endl;
}

