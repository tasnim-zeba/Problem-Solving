#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mx = 0;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            if(i%2)
            {
                mx = max(mx, x);
            }
        }
        cout<<mx<<endl;

    }
}
