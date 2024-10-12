#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k,i,j,c,ans;
    string s;
    cin>>n>>k;
    cin>>s;
    set<char>st;
    set<char>::iterator it;
    while(k--)
    {
        char ch;
        cin>>ch;
        st.insert(ch);
    }
    c=0,ans=0;
    for(i=0;i<n;i++)
    {
        it=find(st.begin(),st.end(),s[i]);
        if(it==st.end())
        {
            ///not found
            ans=ans+((c*(c+1))/2);
            c=0;
        }
        else
        {
            ///found
            c++;
        }
    }
    ans=ans+((c*(c+1))/2);
    cout<<ans<<endl;
}
