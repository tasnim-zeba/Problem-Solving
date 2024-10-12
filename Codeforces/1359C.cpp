#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q,t,h,c,i,j,x, y;
    cin>>q;
    while(q--)
    {
        cin>>h>>c>>t;
        if(2*t<=(h+c))
        {
            cout<<2<<endl;
        }
        else
        {
            x = (c-t)/(h+c-2*t);
            y = x + 1;
            long double v1 = ((double)h*x + c*(x-1))/(2.0*x -1);
            long double v2 = ((double)h*y + c*(y-1))/(2.0*y -1);

            long double diff1 = abs(v1-t);
            long double diff2 = abs(v2-t);

            if(diff1<=diff2){
                cout<<2*x -1<<endl;
            }
            else{
                cout<<2*y -1<<endl;
            }
        }
    }
}

