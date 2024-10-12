#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,c,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s,ans;
        cin>>s;
        int de[30],isd[30],isn[30];
        for(i=0;i<=30;i++)
        {
            de[i]=isd[i]=isn[i]=-1;
        }
        ans="";
        c=0;
        for(i=0;i<n;i++)
        {
            int x=(int)s[i];
            x=x-97;
            cout<<x<<endl;
           if(de[x]!=-1)
            {
                ans+=(char)(de[x]+97);
            }
            else
            {
                for(j=0;j<=26;j++)
                {
                    if(j==x)continue;
                    if(isd[j]==-1)
                    {
                        if(de[j]!=-1&&c<25)continue;
                        else
                        {
                            de[x]=j;
                            ans=ans+(char)(de[x]+97);
                            isd[j]=1;
                            c++;
                            break;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
