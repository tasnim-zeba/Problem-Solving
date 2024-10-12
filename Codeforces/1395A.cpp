#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r,g,b,w;
    cin>>t;
    while(t--)
    {
        cin>>r>>g>>b>>w;
        int c=0;
        if(r%2)c++;
        if(g%2)c++;
        if(b%2)c++;
        if(w%2)c++;
        if(c>1)
        {
            if(r==0||g==0||b==0)
            {
                cout<<"No"<<endl;
                continue;
            }
            c=0;
            r--,g--,b--;
            w=w+3;
            if(r%2)c++;
            if(g%2)c++;
            if(b%2)c++;
            if(w%2)c++;
            if(c>1)
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}
