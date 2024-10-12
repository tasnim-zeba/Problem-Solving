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
        string s1, s2;
        cin>>s1;
        cin>>s2;
        string ans="";
        int f=0, indx=n-1;
        for(int i=0; i<n; i++)
        {
            if(f==0)
            {
                if((i==n-1) || (s2[i]=='0' && s1[i+1]=='1'))
                {
                    ans.push_back(s1[i]);
                    ans.push_back(s2[i]);
                    indx=i;
                    f=1;
                }
                else{
                    ans.push_back(s1[i]);
                }
            }
            else{
                ans.push_back(s2[i]);
            }
        }
        int cnt = 0;
        for(int i=indx; i>0; i--)
        {
            if(s1[i]==s2[i-1])
            {
                cnt++;
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
        cout<<cnt+1<<endl;
    }
}
