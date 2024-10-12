#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        int x, pow;
        for(int i=0; i<=20; i++)
        {
            pow = (1<<i);
            pow--;
            //cout<<pow<<endl;
            if(pow>a)
            {
                x=i-1;
                break;
            }
        }
        pow=(1<<x);
        pow--;
        //cout<<x<<" "<<pow<<endl;
        int ans = 0;
        if(a==0);
        else if(pow==a)
        {
            ans = ans + x;
        }
        else{
            ans = ans + x + 1;
        }
        //cout<<ans<<endl;
        int c1;
        if(a==0)
        {
            if(c==1)
            {
                cout<<b<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            continue;
        }
        else{
            c1 = (1<<x) + (a-pow);
        }
        //cout<<c1<<endl;
        if(c!=c1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(pow==a)
        {
            int g = (1<<x);
            if(b%g)
            {
                ans = ans+(b/g) + 1;
            }
            else{
                ans = ans+(b/g);
            }
            cout<<ans<<endl;
            continue;
        }
        if(((1<<x)-(a-pow))>=b)
        {
            cout<<ans<<endl;
            continue;
        }
        else{
            b=b-((1<<x)-(a-pow));
            if(b%c)
            {
                ans = ans+(b/c) + 1;
            }
            else{
                ans = ans+(b/c);
            }
            cout<<ans<<endl;
        }
    }
}
