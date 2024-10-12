#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c1=0,c2=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                c1++;
            }
            else if(s[i]=='[')
            {
                c2++;
            }
            else if(s[i]==')')
            {
                if(c1>0)
                {
                    c1--;
                    ans++;
                }
            }
            else if(s[i]==']')
            {
                if(c2>0)
                {
                    c2--;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
