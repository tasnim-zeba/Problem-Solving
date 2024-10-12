#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin.exceptions(ios::badbit | ios::failbit);
	ll t,x;
	cin>>t;
	while(t--)
    {
        cin>>x;
        if(x>1099)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int c=0;
        for(int i=1;i<=10;i++)
        {
            if(x%11==0)
            {
                c=1;
                break;
            }
            x=x-111;
            if(x<0)
            {
                break;
            }
        }
        if(c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
