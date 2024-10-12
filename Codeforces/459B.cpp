#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,d,a,b;
        cin>>n;
        ll ar[n+1];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        d=ar[n-1]-ar[0];
        a=1;
        b=1;
        i=0;
        if(n>1)
        {
            i=0;
            while(ar[i]==ar[i+1])
            {
                i++;
                a++;
                if(i==(n-1))
                {
                    break;
                }
            }
            i=n-1;
            while(ar[i]==ar[i-1])
            {
                i--;
                b++;
                if(i==0)
                {
                    break;
                }
            }
        }
        if(d==0)
        {

            cout<<d<<" "<<(n*(n-1))/2<<endl;
        }
        else
        {
            cout<<d<<" "<<a*b<<endl;
        }

    return 0;
}
