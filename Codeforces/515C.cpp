#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,a,r;
    cin>>n;
    cin>>a;
    vector<ll>v;
    while(a)
    {
        r=a%10;
        if(r==2||r==3||r==5||r==7)
        {
            v.push_back(r);
        }
        else if(r==4)
        {
            v.push_back(2);
            v.push_back(2);
            v.push_back(3);
        }
         else if(r==6)
        {
            v.push_back(3);
            v.push_back(5);
        }
         else if(r==8)
        {
            v.push_back(2);
            v.push_back(2);
            v.push_back(2);
            v.push_back(7);
        }
         else if(r==9)
        {
            v.push_back(3);
            v.push_back(3);
            v.push_back(2);
            v.push_back(7);
        }
        a=a/10;
    }
    sort(v.begin(),v.end(),greater<>());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}
