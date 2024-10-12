#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a1,a2;
    cin>>a1>>a2;
    ll c=0;
    while(1)
    {
        if(a1<a2)
        {
            a1++;
            a2=a2-2;
            if(a2<0)
            {
                break;
            }
            else if(a2==0)
            {
                c++;
                break;
            }
            c++;
        }
        else
        {
            a2++;
            a1=a1-2;
            if(a1<0)
            {
                break;
            }
            else if(a1==0)
            {
                c++;
                break;
            }
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
