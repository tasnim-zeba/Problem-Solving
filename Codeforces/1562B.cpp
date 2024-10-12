#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,x,i,c,f1,f2,f;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x<11)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            f1=x%10;
            f2=x%100;
            f2=f2/10;
            if(f2<f1)
            {
                cout<<"NO"<<endl;
                continue;
            }
            c=1;
            string s=to_string(x);

        }
    }
}
