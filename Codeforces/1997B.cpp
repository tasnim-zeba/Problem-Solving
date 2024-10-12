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
        string s,t;
        cin>>s>>t;
        int ans  = 0;
        for(int i=1; i<n-1; i++)
        {
            if(s[i]=='.' && s[i-1]=='.' &&s[i+1] == '.' && t[i] == '.' && t[i-1] == 'x' && t[i+1] == 'x')
            {
                ans++;
            }
            if(t[i]=='.' && t[i-1]=='.' &&t[i+1] == '.' && s[i] == '.' && s[i-1] == 'x' && s[i+1] == 'x')
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}

