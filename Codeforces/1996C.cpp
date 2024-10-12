#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string a,b;
        cin>>a>>b;
        int v[26][n+1];
        for(int i=0; i<26; i++)
        {
            for(int j=0; j<n; j++)
            {
                v[i][j] = 0;
            }
        }
        for(int i=0; i<n; i++)
        {
            v[b[i]-'a'][i]++;
            v[a[i]-'a'][i]--;
        }
        for(int j=1; j<n; j++)
        {
            for(int i=0; i<26; i++)
            {
                v[i][j] += v[i][j-1];
            }
        }

        while(q--)
        {
            int l,r;
            cin>>l>>r;
            l--, r--;
            int ans = 0;
            for(int i=0; i<26; i++)
            {
                int f;
                if(l==0){
                    f = v[i][r];
                }
                else{
                    f = v[i][r] - v[i][l-1];
                }
                ans += abs(f);
            }
            cout<<ans/2<<endl;
        }
    }
}
