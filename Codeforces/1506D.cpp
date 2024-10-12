#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,x,a,b;
    cin>>t;
    while(t--){
        cin>>n;
    map<ll,ll>m;
     map<ll,ll>:: iterator it;
    for(i=0;i<n;i++){
        cin>>x;
        m[x]++;
    }
    priority_queue<ll>q;
    for(it=m.begin();it!=m.end();it++){
        ///cout<<it->first<<" "<<it->second<<endl;
        q.push(it->second);
    }
    while(q.size()>1){
        a=q.top();
        q.pop();
        b=q.top();
        q.pop();
        a--;
        b--;
        if(a){
            q.push(a);
        }
        if(b){
            q.push(b);
        }
    }
    if(q.size()==0){
        cout<<0<<endl;
    }else{
        cout<<q.top()<<endl;
    }
    }

    return 0;
}
