#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,l,r,x,a,b;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>x;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        if(abs(a-b)>=x)
        {
            cout<<1<<endl;
            continue;
        }
        if((a-x)<l&&(a+x)>r)
        {
            cout<<-1<<endl;
            continue;
        }
        if(a<b)
        {
            int o=b-a;
            if((a+(o+x))<=r)
            {
                cout<<2<<endl;
                continue;
            }
            else if((a-l)>=x&&(b-l)>=x)
            {
                cout<<2<<endl;
                continue;
            }
            else if((r-a)>=x&&(r-l)>=x&&(b-l)>=x)
            {
                cout<<3<<endl;
                continue;
            }
            else if((a-l)>=x&&(r-l)>=x&&(r-b)>=x)
            {
                cout<<3<<endl;
                continue;
            }
            else
            {
                cout<<-1<<endl;
                continue;
            }
        }
        else if(b<a)
        {
            int o=a-b;
            if((a-(o+x))>=l)
            {
                cout<<2<<endl;
                continue;
            }
            else if((r-a)>=x&&(r-b)>=x)
            {
                cout<<2<<endl;
                continue;
            }
            else if((r-a)>=x&&(r-l)>=x&&(b-l)>=x)
            {
                cout<<3<<endl;
                continue;
            }
            else if((a-l)>=x&&(r-l)>=x&&(r-b)>=x)
            {
                cout<<3<<endl;
                continue;
            }
            else
            {
                cout<<-1<<endl;
                continue;
            }
        }
    }
}
