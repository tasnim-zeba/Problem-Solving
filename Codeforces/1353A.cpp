#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,m1,m2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        sort(v.begin(),v.end());
        if((a==v[2]&&b==v[3])||(a==v[3]&&b==v[2]))
        {
           cout<<"NO"<<endl;
        }
        else if((c==v[2]&&d==v[3])||(d==v[2]&&c==v[3]))
        {
           cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
