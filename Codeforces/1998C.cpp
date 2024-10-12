#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll a[n+1], b[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        ll ans1 = 0, indx=-1;
        for(int i=0; i<n; i++)
        {
            if(b[i]==1)
            {
                if(a[i]>ans1)
                {
                    ans1 = a[i];
                    indx = i;
                }
            }
        }
        if(indx!=-1)
        {
            ans1 = ans1+k;
            vector<int>v;
            for(int i=0; i<n; i++)
            {
                if(i==indx)continue;
                v.push_back(a[i]);
            }
            sort(v.begin(), v.end());
            ans1 = ans1 + v[(n-2)/2];
            //cout<<v[(n-2)/2]<<endl;
        }

        ll ans2 = 0, indx1=-1;
        for(int i=0; i<n; i++)
        {
            if(b[i]==0)
            {
                if(a[i]>ans2)
                {
                    ans2 = a[i];
                    indx1 = i;
                }
            }
        }
        if(indx1!=-1)
        {
            vector<pair<int,int>>p;
            for(int i=0; i<n; i++)
            {
                if(i==indx1)continue;
                p.push_back({a[i], b[i]});
            }
            sort(p.begin(), p.end());
            ll med = p[(n-2)/2].first, cnt = 0 ;
            vector<ll>in;
            for(int i=((n-2)/2)-1; i>=0; i--)
            {
                if(p[i].second==1)
                {
                    in.push_back(i);
                }
            }
            int h;
            if(in.size()==0){
                h=-1;
            }
            else{
                h = 0;
            }
            for(int i=(n-2)/2; i<p.size(); i++)
            {
                if(p[i].second==0){
                    if(h==-1)break;
                    else
                    {
                        swap(p[i],p[in[h]]);
                        h++;
                        if(h>=in.size()){
                            h=-1;
                        }
                    }
                    ll g = med-p[i].first;
                    if(k<g)break;
                    else{
                        p[i].first = med;
                        k=k-g;
                    }
                }
                cnt++;
                if((i+1)<p.size())
                {
                    ll d = p[i+1].first - med;
                    if((cnt*d)<=k)
                    {
                        med = p[i+1].first;
                        k=k-(cnt*d);
                    }
                    else{
                        med = med + (k/cnt);
                        break;
                    }
                }
                else{
                    med = med + (k/cnt);
                }
            }
            ans2 = ans2+med;
        }
        //cout<<ans1<<" "<<ans2<<endl;
        ll res = max(ans1,ans2);
        cout<<res<<endl;
    }
}
