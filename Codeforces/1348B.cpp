#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,a[102],l,d;
    cin>>t;
    while(t--){
        cin>>n>>k;
        set<int>s;
        set<int>:: iterator it;
        for(i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
       /* for(it=s.begin();it!=s.end();it++){
                cout<<*it<<" ";
            }*/
        l=s.size();
        if(k<l){
            cout<<-1<<endl;
        }else{
             vector<int>v;
        for(it=s.begin();it!=s.end();it++){
                v.push_back(*it);
            }
        d=k-l;
        while(d--){
          v.push_back(1);
        }
        cout<<n*v.size()<<endl;
        while(n--){
            for(i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
        }
    }
    return 0;
}
