//pair soring basic
//sorting pair like programming contest ranklist
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
bool cmp(const pair<long long,long long>&a,pair<long long,long long>&b)
{
    if(a.first==b.first)return (a.second<b.second);
    return (a.first>b.first);
}
int main()
{
    long long n,x,y,i,t,w,c;
    vector< pair<long long,long long> >v;
    //vector< pair<int,int> >::iterator it;
   cin>>t;
    while(t--){
    cin>>n>>w;
    for(int k=1;k<=n;k++)
    {
        cin>>x;
        v.push_back(make_pair(x,k));
    }
    ///cout<<endl;
    sort(v.begin(),v.end(),cmp);
    /*for(i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }*/
    vector<long long>v1;
    c=0;
    for(i=0;i<v.size();i++)
    {
        if((c+v[i].first)<=w){
            c=c+v[i].first;
            v1.push_back(v[i].second);
        }
    }
    sort(v1.begin(),v1.end());
    if(c<(w/2)){
        cout<<-1<<endl;
    }else{
        cout<<v1.size()<<endl;
        //cout<<c<<endl;
        for(int j=0;j<v1.size();j++)
    {
        if(j==(v1.size()-1)){
            cout<<v1[j]<<endl;
        }
        else{
            cout<<v1[j]<<" ";
        }
    }

    }
    v1.clear();
    }
    return 0;
}

