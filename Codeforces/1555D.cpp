#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,l,r;
    cin>>n>>m;
    string s,s1,s2,s3,s4,s5,s6;
    s1=s2=s3=s4=s5=s6="";
    cin>>s;
    while(s1.size()<n)
    {
        s1+="abc";
        s2+="acb";
        s3+="bac";
        s4+="bca";
        s5+="cab";
        s6+="cba";
    }

    int dp[7][n+3];
    for(i=0;i<7;i++)
    {
        for(j=0;j<n+3;j++)
        {
            dp[i][j]=0;
        }
    }
    for(i=0;i<6;i++)
    {
        string h;
        if(i==0)h=s1;
        else if(i==1)h=s2;
        else if(i==2)h=s3;
        else if(i==3)h=s4;
        else if(i==4)h=s5;
        else if(i==5)h=s6;
        for(j=1;j<=n;j++)
        {
            if(h[j-1]!=s[j-1])
            {
                dp[i][j]=dp[i][j-1]+1;
            }
            else
            {
                dp[i][j]=dp[i][j-1];
            }
            //cout<<dp[i][j]<<" ";
        }
        //cout<<endl;
    }
    while(m--)
    {
        cin>>l>>r;
        int mn=INT_MAX;
        for(i=0;i<6;i++)
        {
            mn=min(mn,dp[i][r]-dp[i][l-1]);
        }
        cout<<mn<<endl;
    }
}
