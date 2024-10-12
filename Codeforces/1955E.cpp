#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int k=n; k>=1; k--)
        {
            vector<int>flag(n+2, 0);
            /*for(int i=0; i<n; i+=k)
            {
                flag[i] = 1;
            }*/
            int f=0;
            int c=1;
            for(int i=0; i<n; i++)
            {
                f=f^flag[i];
                if((f^(s[i]-'0'))==0)
                {
                    f=f^1;
                    if((i+k)<=n)
                    {
                        flag[i+k] = 1;
                    }
                    //else if(i==n-1)break;
                    else{
                        c=0;
                        break;
                    }
                }
            }
            if(c==1)
            {
                cout<<k<<endl;
                break;
            }
        }
    }
}
