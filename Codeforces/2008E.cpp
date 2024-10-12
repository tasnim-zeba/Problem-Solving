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
        map<char,int>odd, even;
        for(int i=0; i<n; i++)
        {
            if(i%2==0){
                even[s[i]]++;
            }
            else{
                odd[s[i]]++;
            }
        }
        if(n==1){
            cout<<1<<endl;
        }
        else if(n%2==0){
            int mx1 = 0;
            for(auto ch: even){
                mx1 = max(mx1, ch.second);
            }
            int mx2 = 0;
            for(auto ch: odd){
                mx2 = max(mx2, ch.second);
            }
            cout<<(n-mx1-mx2)<<endl;
        }
        else{
            vector<vector<int>>pro(n+2,vector<int>(30, 0));
            vector<vector<int>>pr(n+2,vector<int>(30, 0));
            vector<vector<int>>sfo(n+2,vector<int>(30, 0));
            vector<vector<int>>sf(n+2,vector<int>(30, 0));
            for(int i=0; i<n; i++)
            {
                if(i%2==0){
                    pr[i][s[i]-'a']++;
                }
                else{
                    pro[i][s[i]-'a']++;
                }
            }
            for(int i=1; i<n; i++)
            {
                for(int j=0; j<28; j++){
                    pr[i][j]+=pr[i-1][j];
                    pro[i][j]+=pro[i-1][j];
                   // cout<<pr[i][j]<<" ";
                }
                //cout<<endl;
            }
            for(int i=n-1; i>=0; i--)
            {
                if(i%2==0){
                    sf[i][s[i]-'a']++;
                }
                else{
                    sfo[i][s[i]-'a']++;
                }
            }
            for(int i=n-2; i>=0; i--)
            {
                for(int j=0; j<28; j++){
                    sf[i][j]+=sf[i+1][j];
                    sfo[i][j]+=sfo[i+1][j];
                   // cout<<pr[i][j]<<" ";
                }
                //cout<<endl;
            }
            int mn=INT_MAX;
            for(int i=0; i<n; i++)
            {
                if(i==0){
                     int x,y;
                    x=y=0;
                    for(int j=0; j<28; j++)
                    {
                        x=max(x,sfo[i+1][j]);
                        y=max(y,sf[i+1][j]);
                    }
                    mn=min(mn,(n-x-y));
                }
                else if(i==(n-1)){
                    int x,y;
                        x=y=0;
                    for(int j=0; j<28; j++)
                    {
                        x=max(x,pr[i-1][j]);
                        y=max(y, pro[i-1][j]);
                    }
                    mn=min(mn,(n-x-y));
                }
                else{
                        int x,y;
                        x=y=0;
                    for(int j=0; j<28; j++)
                    {
                        x=max(x,pr[i-1][j]+sfo[i+1][j]);
                        y=max(y, pro[i-1][j]+sf[i+1][j]);
                    }
                    mn=min(mn,(n-x-y));
                }
            }
            cout<<mn<<endl;
        }
    }
}


