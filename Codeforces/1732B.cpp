#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        c=0;
        int ans=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1'&&c==0)
            {
                c++;
                while(s[i]=='1')
                {
                    i++;
                    if(i==n)
                    {
                        break;
                    }
                }
                if(i!=n)
                {
                      ans++;
                      i--;
                }
            }
            else if(s[i]=='1')
            {
                 while(s[i]=='1')
                {
                    i++;
                    if(i==n)
                    {
                        ans++;
                        break;
                    }
                }
                if(i!=n)
                {
                      ans=ans+2;
                      i--;
                }
            }

        }
        cout<<ans<<endl;
    }
}
