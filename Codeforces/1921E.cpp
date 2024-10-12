#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h, w, xa, ya, xb, yb;
        cin>>h>>w>>xa>>ya>>xb>>yb;
        if(xa>=xb || abs(ya-yb)>(xb-xa))
        {
            cout<<"Draw"<<endl;
            continue;
        }
        int d = xb-xa;
        if(d%2==0)
        {
            int step = (xb-xa)/2;
            if(ya==yb)
            {
                cout<<"Bob"<<endl;
            }
            else if(ya<yb)
            {
                if(yb-1<=step)
                {
                    cout<<"Bob"<<endl;
                }
                else{
                    cout<<"Draw"<<endl;
                }
            }
            else{
                if(w-yb<=step)
                {
                    cout<<"Bob"<<endl;
                }
                else{
                    cout<<"Draw"<<endl;
                }
            }
        }
        else{
            int step = (xb-xa+1)/2;
            if(abs(ya-yb)<=1)
            {
                cout<<"Alice"<<endl;
            }
            else if(ya<yb)
            {
                if(w-ya<=step)
                {
                    cout<<"Alice"<<endl;
                }
                else{
                    cout<<"Draw"<<endl;
                }
            }
            else{
                if(ya-1<=step)
                {
                    cout<<"Alice"<<endl;
                }
                else{
                    cout<<"Draw"<<endl;
                }
            }
        }
    }
}
