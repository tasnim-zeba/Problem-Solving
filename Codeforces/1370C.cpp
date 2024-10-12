#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,i,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<< "FastestFinger"<<endl;
        }
        else  if(n%2||n==2)
        {
            cout<<"Ashishgup"<<endl;
        }
        else
        {
            int f=0;
            while(n%2==0)
            {
                f++;
                n=n/2;
            }
            if(f>1&&n!=1)
            {
                cout<<"Ashishgup"<<endl;
            }
            else
            {
                int p=1;
                for(i=2;i*i<=n;i++)
                {
                    if(n%i==0)
                    {
                        p=0;
                        break;
                    }
                }
                if(p)
                {
                    cout<< "FastestFinger"<<endl;
                }
                else
                {
                    cout<<"Ashishgup"<<endl;
                }
            }
        }
    }
    return 0;
}
