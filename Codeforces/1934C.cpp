#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<"? "<<1<<" "<<1<<endl;
        int x;
        cin>>x;
        if(x==0)
        {
            cout<<"! "<<1<<" "<<1<<endl;
            continue;
        }
        int x1, y1;
        if(x<m)
        {
            x1 = 1;
            y1 = x+1;
        }
        else{
            x1=(x-m)+2;
            y1= m;
        }
        cout<<"? "<<x1<<" "<<y1<<endl;
        cin>>x;
        if(x==0)
        {
            cout<<"! "<<x1<<" "<<y1<<endl;
            continue;
        }
        int x2, y2;
        int dif = min((n-x1), (y1-1));
        x2 = x1+dif;
        y2 = y1 - dif;
       int d = abs(x1-x2)+abs(y1-y2);
       int x3,y3;
       if(x%2==0 && x<=d)
       {
           x3=x1+(x/2);
           y3 = y1-(x/2);
           cout<<"? "<<x3<<" "<<y3<<endl;
            cin>>x;
            if(x==0)
            {
                cout<<"! "<<x3<<" "<<y3<<endl;
                continue;
            }
       }
        cout<<"? "<<x2<<" "<<y2<<endl;
        cin>>x;
        if(x==0)
        {
            cout<<"! "<<x2<<" "<<y2<<endl;
            continue;
        }
        cout<<"! "<<x2-(x/2)<<" "<<y2+(x/2)<<endl;
    }
}
