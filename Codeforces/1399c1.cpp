#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,ans,mx,t;
    cin>>t;
    while(t--)
    {
         cin>>n;
    map<int,int>m;
     map<int,int>:: iterator it;
    for(i=0;i<n;i++){
        cin>>x;
        m[x]++;
    }
    mx=INT_MIN;
    for(i=2;i<=100;i++)
    {
        ans=0;
        for(it=m.begin();it!=m.end();it++)
        {

           if(it->first<i)
           {
               ///(i-it->first)set e ache kina
               ///it1=find(v.begin(),v.end(),(i-it->first));
               if(m.count(i-it->first))
               {
                   ans=ans+min(it->second,m[i-it->first]);
                   break;
               }
           }

        }
        mx=max(mx,ans);
    }
    cout<<mx<<endl;
    }

    return 0;
}
