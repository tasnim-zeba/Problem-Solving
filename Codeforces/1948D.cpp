#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        int ans = 0;
        for(int i=n/2; i>=1; i--)
        {
            int c=0;
            for(int j=0; j+i<n; j++)
            {
                if(s[j]==s[j+i] || s[j]=='?' || s[j+i]=='?')
                {
                    c++;
                    if(c==i)
                    {
                        ans = c;
                        break;
                    }
                }
                else{
                    c=0;
                }
            }
            if(ans)
            {
                break;
            }
        }
        cout<<2*ans<<endl;
    }
}
