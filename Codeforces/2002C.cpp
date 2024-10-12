#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll>>v;
        for(ll i=1,x,y; i<=n; i++){
            cin>>x>>y;
            v.push_back({x,y});
        }
        ll xs,ys,xt,yt;
        cin>>xs>>ys>>xt>>yt;
       // ll d = abs(xs-xt)+abs(ys-yt);
        ll d =((xs-xt)*(xs-xt))+((ys-yt)*(ys-yt));
        /*ll d = sqrt((((double)xs-xt)*(xs-xt))+(double)((ys-yt)*(ys-yt)));
        if((d*d)==(((xs-xt)*(xs-xt))+((ys-yt)*(ys-yt))));
        else{
            d++;
        }*/
        int f = 1;
        for(int i=0; i<v.size(); i++){
            ll x = v[i].first;
            ll y = v[i].second;
            /*if(xt>=(x-d)&&xt<=(x+d)&&yt>=(y-d)&&yt<=(y+d)){
                f=0;
                break;
            }*/
            ll p = ((x-xt)*(x-xt))+((y-yt)*(y-yt));
            /*ll p = sqrt(((x-xt)*(x-xt))+((y-yt)*(y-yt)));
            if((p*p)==(((x-xt)*(x-xt))+((y-yt)*(y-yt))));
            else{
                p++;
            }*/
            //ll p = abs(x-xt)+abs(y-yt);
            if(p<=d){
                f=0;
                //cout<<fixed<<setprecision(10)<<d<<" "<<p<<endl;
                //cout<<x<<"  "<<y<<" "<<d<<" "<<p<<endl;
                break;
            }
            /*else if(p==d){
                ll h = abs(xs-xt)+abs(ys-yt);
                ll h2 = abs(x-xt)+abs(y-yt);
                if(h>h2){
                    f=0;
                    break;
                }
            }*/
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

