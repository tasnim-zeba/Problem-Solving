#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(100%n==0)
        {
            cout<<100/n<<endl;
        }
        else
        {
            cout<<100<<endl;
        }
    }
    return 0;
}
