#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, q;
        cin>>n>>m>>q;
        int x,y,z;
        cin>>x>>y;
        cin>>z;
        if(x>y)
        {
            swap(x,y);
        }
        if(x==z || y==z)
        {
            cout<<0<<endl;
        }
        else if(x<z && z<y)
        {
            int mid = (x+y)/2;
            cout<<min(mid-x, y-mid)<<endl;
        }
        else{
            if(x>y)
            {
                swap(x,y);
            }
            if(z<x)
            {
                cout<<x-1<<endl;
            }
            else{
                cout<<n-y<<endl;
            }
        }
    }
}

