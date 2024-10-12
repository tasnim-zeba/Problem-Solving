#include<bits/stdc++.h>
#include<stdio.h>
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
    //vector< pair<long long,long long> >v1;
    //vector< pair<int,int> >::iterator it;
    vector<ll>v1,v2;
    for(int i=0;i<2*n;i++)
    {
        int x,y;
       cin>>x>>y;
        if(x==0){
            v1.push_back(y);
        }else if(y==0){
            v2.push_back(x);
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    double ans=0;
    for(int i=0;i<n;i++){
            ll a=v1[i]*v1[i]+v2[i]*v2[i];
        ans+=(double)sqrt(a);
    }
    cout<<ans<<endl;
    }
    return 0;
}
