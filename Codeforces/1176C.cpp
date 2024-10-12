
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed;
    cout<<setprecision(10);
    int n,i,j,c;
    cin>>n;
    int a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int h[6]= {4,8,15,16,23,42};
    int dp[8][n+2];
    memset(dp,0,sizeof dp);
    for(i=0; i<6; i++)
    {
        c=0;
        for(j=0; j<n; j++)
        {
            if(j==0&&i==0)
            {
                if(a[j]==h[i])
                {
                    c++;
                    dp[i][j]=c;
                }
                else
                {
                    dp[i][j]=c;
                }
            }
            else if(j==0)
                dp[i][j]=c;
            else
            {
                if(a[j]==h[i])
                {
                    if(i==0)
                    {
                        c++;
                        dp[i][j]=c;
                    }
                    else
                    {
                        if((c+1)<=dp[i-1][j-1])
                        {
                            c++;
                            dp[i][j]=c;
                        }
                        else
                        {
                            dp[i][j]=c;
                        }
                    }
                }
                else
                {
                    dp[i][j]=c;
                }
            }

        }
    }
    /*for(i=0;i<6;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    if(n<6)
    {
        cout<<n<<endl;
    }
    else
    {
        cout<<n-dp[5][n-1]*6<<endl;
    }

}
