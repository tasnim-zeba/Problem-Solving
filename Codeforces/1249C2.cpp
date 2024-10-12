#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q,n,i,x,ans;
    cin>>q;
    while(q--)
    {
        cin>>n;
        while(1)
        {
            x=n;
            bool b=true;
            while(x>0)
            {
                if(x%3==2)
                {
                    b = false;
                    break;
                }
                else
                {
                    x=x/3;
                }
            }
            if(b)
            {
                cout<<n<<" ";
                ans=n;
               /// break;
            }
            n++;
            if(n==100000)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
