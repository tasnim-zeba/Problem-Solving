#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=4e4+10;
int M=1e9+7;
int dp[505][N];
bool ispali(int x)
{
    string s=to_string(x);
    string s1=s;
    reverse(s1.begin(),s1.end());
    if(s==s1)return true;
    else return false;
}
int main()
{
    vector<int>v;
    for(int i=1; i<=N; i++)
    {
        if(ispali(i))
        {
            v.push_back(i);
        }
    }
    int n=v.size();
    /*for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }*/
    int t,i,j,x;
    x=N;
    for(i=0; i<n; i++)
    {
        for(j=0; j<=x; j++)
        {
            if(j==0)
            {
                dp[i][j]=1;
            }
            else
            {
                int op1,op2;
                if(v[i]>j)
                {
                    op1=0;
                }
                else
                {
                    op1=dp[i][j-v[i]];
                }
                if(i==0)
                {
                    op2=0;
                }
                else
                {
                    op2=dp[i-1][j];
                }
                dp[i][j]=(op1+op2)%M;
            }
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>x;
        cout<<dp[n-1][x]<<endl;
    }
}
