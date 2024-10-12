#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,k,sr,c,r;
    cin>>t;
    while(t--)
    {
        cin>>k;
        sr=sqrt(k);
        if(sr*sr==k);
        else
        {
            sr++;
        }
        //c=sr;
        ll m=(sr-1)*(sr-1)+sr;
        if(k>=m)
        {
            c=sr-(k-m);
            r=sr;
        }
        else
        {
            c=sr;
            r=sr-(m-k);
        }
        cout<<r<<" "<<c<<endl;
    }
    return 0;
}
