#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c,f;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        stack<char>st;
        for(i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(s[i]=='B'&&(st.top()=='A'||st.top()=='B'))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        cout<<st.size()<<endl;
    }
    return 0;
}
