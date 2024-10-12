#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    //fio
    ll t,n,k,i,j,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll aw,ab,bw,bb;
        ab=bw=bb=0;
        aw=1;
        ll x=1;
        ll f=0;
        for(i=2; x<=n; i+=2)
        {
            if(f%2==0)
            {
                if((x+i+i+1)<=n)
                {
                    if(x%2)
                    {
                        bb+=i+1;
                        bw+=i;
                    }
                    else
                    {
                        bw+=i+1;
                        bb+=i;
                    }
                    x+=i+i+1;
                }
                else
                {
                    if((n-x)%2)
                    {
                        if(x%2)
                        {
                            bb+=((n-x)/2)+1;
                            bw+=(n-x)/2;
                        }
                        else
                        {
                            bw+=((n-x)/2)+1;
                            bb+=(n-x)/2;
                        }
                    }
                    else
                    {
                         bb+=((n-x)/2);
                         bw+=(n-x)/2;
                    }
                    x=n;
                    break;
                }
                f++;
            }
            else
            {
                f=0;
                if((x+i+i+1)<=n)
                {
                    if(x%2)
                    {
                        ab+=i+1;
                        aw+=i;
                    }
                    else
                    {
                        aw+=i+1;
                        ab+=i;
                    }
                    x+=i+i+1;
                }
                else
                {
                    if((n-x)%2)
                    {
                        if(x%2)
                        {
                            ab+=((n-x)/2)+1;
                            aw+=(n-x)/2;
                        }
                        else
                        {
                            aw+=((n-x)/2)+1;
                            ab+=(n-x)/2;
                        }
                    }
                    else
                    {
                         ab+=((n-x)/2);
                         aw+=(n-x)/2;
                    }
                    x=n;
                    break;
                }
            }
        }
        cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<endl;
    }
}

