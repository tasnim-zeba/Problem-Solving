#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll res,a[3];
    cin>>a[0]>>a[1]>>a[2];
    res=(a[0]+a[1]+a[2])/3;
    sort(a,a+3);
    if((a[0]+a[1])<res)
    {
        res=a[0]+a[1];
    }
    cout<<res<<endl;
}
