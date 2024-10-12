#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k,i,j,c,m;
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    c=1,m=a[0];
    for(i=1;i<n;i++){
        if(m>a[i]){}
        else{
            c++;
            m=m+a[i];
        }
    }
    cout<<c<<endl;
}
