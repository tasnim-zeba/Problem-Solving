#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll big=1e15;
int main()
{
    long long n,i,c,ans,pw,f,s;
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    c=1,pw=1,ans=big,f=0;
    while(1){
        pw=1,s=0;
        for(i=0;i<n;i++,pw=pw*c){
            if(pw>=big){
                f=-1;
            }
            s=s+abs(pw-a[i]);
        }
        if(f==-1){
            break;
        }
        ans=min(ans,s);
        c++;
    }
    cout<<ans<<endl;
    return 0;
}
