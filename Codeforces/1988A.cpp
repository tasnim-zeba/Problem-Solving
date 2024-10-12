#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(k>=n)
        {
            cout<<1<<endl;
        }
        else
        {
           int x =1;
            while(n)
            {
                n=n-(k-1);
                if(n>1)x++;
                else{
                    break;
                }
            }
            cout<<x<<endl;
        }
    }
}
