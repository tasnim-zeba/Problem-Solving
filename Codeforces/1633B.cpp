#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<endl;
        }
        else
        {
            x=(n/10)*10+0;
            y=(n/10)*10+9;
            for(i=x;i<=y;i++)
            {
                if(i%7==0)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}
