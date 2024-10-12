#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int q[n+1],mn[n+1],mx[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>q[i];
        }
        set<int>st;
        for(i=1;i<=n;i++)
        {
            st.insert(i);
        }
        mn[1]=q[1];
        auto it=(st.find(mn[1]));
        st.erase(it);
        for(i=2;i<=n;i++)
        {
            it=st.find(q[i]);
            if(it==st.end())
            {
                auto it1=st.begin();
                mn[i]=*it1;
                st.erase(it1);
            }
            else
            {
                st.erase(it);
                mn[i]=q[i];
            }
        }
        set<int>st1;
        for(i=1;i<=n;i++)
        {
            st1.insert(i);
        }
        mx[1]=q[1];
        it=(st1.find(mx[1]));
        st1.erase(it);
        for(i=2;i<=n;i++)
        {
            it=st1.find(q[i]);
            if(it==st1.end())
            {
                auto it2=st1.upper_bound(q[i]);
                it2--;
                mx[i]=*it2;
                st1.erase(it2);
            }
            else
            {
                st1.erase(it);
                mx[i]=q[i];
            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<mn[i]<<" ";
        }
        cout<<endl;
        for(i=1;i<=n;i++)
        {
            cout<<mx[i]<<" ";
        }
        cout<<endl;
    }
}
