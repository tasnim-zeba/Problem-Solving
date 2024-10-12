#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,x,res,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>v(n+1);
        map<ll,ll>mp1;
        map<ll,ll>mp2;
        for(i=1;i<=n;i++){
            cin>>v[i];
        }
        for(i=1;i<=n;i++){
            x=v[i]-i;
            v[i]=x;
            if(x<0){
                x=abs(x);
                mp2[x]++;
            }
            else{
                mp1[x]++;
            }
        }
        res=0;
        for(i=1;i<=n;i++)
        {
            if(v[i]<0){
                v[i]=abs(v[i]);
                mp2[v[i]]--;
                res=res+mp2[v[i]];
            }
            else{
                mp1[v[i]]--;
                res=res+mp1[v[i]];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
