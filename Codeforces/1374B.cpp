#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,root,c,c2,c3,ans,t;
    cin>>t;
    while(t--){
    cin>>n;
    if(n==1){
        cout<<0<<endl;
        continue;
    }
vector<bool>p(1000,true);
vector<ll>prime;
vector<ll>primeFactor;
    for(i=2;i*i<=1000;i++)
    {
        if(p[i]==true)
        {
            for(j=i*i;j<=1000;j=j+i)
            {
            p[j]=false;
            }
        }
    }
for(i=2;i<=1000;i++)
    {
     if(p[i])
    {
    prime.push_back(i);
    }
    }
    root=sqrt(n);
    for(i=0;i<prime.size()&&prime[i]<=root;i++)
   {
    if(n%prime[i]==0)
    {
        while(n%prime[i]==0)
        {
        primeFactor.push_back(prime[i]);
        n=n/prime[i];
        }
        root=sqrt(n);
    }
}
if(n!=1)
{
primeFactor.push_back(n);
}
/*for(int i=0;i<primeFactor.size();i++)
    {
    cout<<primeFactor[i]<<" ";
    }*/
    c=0,c2=0,c3=0;
    for(int i=0;i<primeFactor.size();i++)
    {
    if(primeFactor[i]!=2&&primeFactor[i]!=3){
        c=1;
    }
    if(primeFactor[i]==2){
        c2=1;
    }
    if(primeFactor[i]==3){
        c3=1;
    }
    }
    if(c==1){
        cout<<-1<<endl;
    }else if(c3==0){
        cout<<-1<<endl;
    }else{
    c2=0,c3=0;
    for(int i=0;i<primeFactor.size();i++){
    if(primeFactor[i]==2){
        c2++;
    }else if(primeFactor[i]==3){
        c3++;
    }
    }
    if(c2>c3){
        cout<<-1<<endl;
    }else{
        ans=(c3-c2)+c3;
        cout<<ans<<endl;
    }

    }
    }

    return 0;
}


