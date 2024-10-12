#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j,x,r;
    cin>>t;
    char d='0';
    ///cout<<(int)d<<endl;
    while(t--)
    {
        cin>>n;
        string x;
        cin>>x;
        string s="";
        for(i=n-1;i>=0;)
        {
            r=((int)x[i])-48;
            if(r)
            {
                s+=(char)(96+r);
                i--;
            }
            else
            {
                i--;
                r=((int)x[i])-48;
                ///cout<<r<<endl;
                i--;
                int r1=((int)x[i])-48;
                ///cout<<r1<<endl;
                int k=r1*10+r;
                s+=(char)(96+k);
                i--;
            }

        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}
