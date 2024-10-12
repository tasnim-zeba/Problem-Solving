#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f = 0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                if(f>0)
                {
                    s[i] = ')';
                    f--;
                }
                else{
                    s[i] = '(';
                    f++;
                }
            }
            else
            {
                if(s[i]=='(')f++;
                else f--;
            }
        }
        stack<pair<char,int>>st;
        st.push({s[0], 0});
         ll ans = 0;
        for(int i=1; i<n; i++)
        {
            if(s[i]=='('){
                st.push({s[i], i});
                continue;
            }
            auto it = st.top();
            int x = it.second;
            ans = ans + (i-x);
            st.pop();

        }
        cout<<ans<<endl;

    }
}

