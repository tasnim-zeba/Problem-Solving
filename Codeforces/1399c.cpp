#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,ans,mx;
    cin>>n;
    map<int,int>m;
     map<int,int>:: iterator it;
    for(i=0;i<n;i++){
        cin>>x;
        m[x]++;
    }
    vector<int>v;
    vector<int>:: iterator it1;
    for(it=m.begin();it!=m.end();it++){
        ///cout<<it->first<<" "<<it->second<<endl;
        v.push_back(it->first);
    }
    mx=INT_MIN;
    for(i=2;i<=100;i++)
    {
        for(it=m.begin();it!=m.end();it++)
        {
            ans=0;
           if(it->first<i)
           {
               ///(i-it->first)set e ache kina
               it1=find(v.begin(),v.end(),(i-it->first));
               if(it1!=v.end())
               {
                   ans=min(it->second,it1->second);
               }
           }

        }
    }
    return 0;
}
