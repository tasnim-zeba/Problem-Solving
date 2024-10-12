#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        list<int>l;
        list<int>:: iterator it;
        cin>>x;
        l.push_back(x);
        for(i=2;i<=2*n;i++){
            cin>>y;
            it=find(l.begin(),l.end(),y);
            if(it==l.end()){
                l.push_back(y);
            }
        }
        for(it=l.begin();it!=l.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
