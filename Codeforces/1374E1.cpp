#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k,a,b,i,t,ca,cb;
    cin>>n>>k;
    multiset<ll>ma,mb,mc;
    ca=cb=0;
    for(i=1;i<=n;i++)
    {
        cin>>t>>a>>b;
        if(a==1&&b==1)
        {
            mc.insert(t);
            ca++,cb++;
        }
        else if(a==1)
        {
            ma.insert(t);
            ca++;
        }
        else if(b==1)
        {
            mb.insert(t);
            cb++;
        }
    }
    if(ca<k||cb<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    ca=cb=0;
    auto ia=ma.begin(),ib=mb.begin(),ic=mc.begin();
    ll ans=0;
    while(ca<k||cb<k){
        if(ca<k&&cb<k){
            if(ic!=mc.end()){
                if(ia!=ma.end()&&ib!=mb.end()){
                    if((*ia+*ib)<=*ic){
                        ans+=(*ia)+(*ib),ia++,ib++,ca++,cb++;
                    }
                    else{
                        ans+=(*ic),ic++,ca++,cb++;
                    }
                }
                else {
                    ans+=(*ic),ic++,ca++,cb++;
                }
            }
            else
            {
                ans+=(*ia)+(*ib),ia++,ib++,ca++,cb++;
            }
        }
        else if(ca<k){
            if(ia!=ma.end()&&ic!=mc.end()){
                if(*ia<=*ic){
                    ans+=(*ia),ia++,ca++;
                }
                else{
                    ans+=(*ic),ic++,ca++,cb++;
                }
            }
            else if(ia!=ma.end()){
                ans+=(*ia),ia++,ca++;
            }
            else{
                ans+=(*ic),ic++,ca++,cb++;
            }
        }
        else if(cb<k){
            if(ib!=mb.end()&&ic!=mc.end()){
                if(*ib<=*ic){
                    ans+=(*ib),ib++,cb++;
                }
                else{
                    ans+=(*ic),ic++,ca++,cb++;
                }
            }
            else if(ib!=mb.end()){
                ans+=(*ib),ib++,cb++;
            }
            else{
                ans+=(*ic),ic++,ca++,cb++;
            }
        }
    }
    cout<<ans<<endl;
}
