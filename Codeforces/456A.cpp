#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector< pair<int,int> >v;
    vector< pair<int,int> >::iterator it;
    int n,i,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int f=0;
    for(it=v.begin();it<v.end()-1;it++)
    {
        if((it->second)>(it+1)->second)
        {
            f=1;
            break;
        }
    }
    if(f)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
    {
        cout<<"Poor Alex"<<endl;
    }
    return 0;
}
