#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,a,b,i;
    vector<int>v;
    for(i=0;i<300005;i++)
    {
        v.push_back(i);
    }
    for(i=1;i<300005;i++)
    {
        v[i]=v[i-1]^v[i];
    }
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        n=a;
        if(v[a-1]==b);
        else if ((v[a-1]^a)==b)
        {
            n=n+2;
        }
        else
        {
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}
