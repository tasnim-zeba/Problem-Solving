#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
   // fio
    int t,n,k,i,j,r,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            cin>>k;
            mp[k]++;
        }
        r=0;
        for(auto it:mp)
        {
            if(it.second>1)r=1;
        }
        if(r)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
