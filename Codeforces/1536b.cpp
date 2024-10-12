#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9+7;
ll mod(ll x){
    return (x%M + M)%M;
}

ll mul(ll a, ll b){
    return mod((mod(a)*mod(b)));
}

ll add(ll a , ll b){
    return mod(mod(a)+mod(b));
}
void solve()
{
    int t,n,i,j,k;
    string s;
        cin>>n;
        cin>>s;
        int c[30]={0};
        for(i=0;i<n;i++)
        {
            c[s[i]-'a']=1;
        }
        for(i=0;i<26;i++)
        {
            if(c[i]==0)
            {
                cout<<(char)('a'+i)<<endl;
                return;
            }
        }
        set<string>st;
        for(i=0;i<n-1;i++)
        {
            string f="";
            f=f+s[i];
            f=f+s[i+1];
            st.insert(f);
        }
        for(i=0;i<26;i++)
        {
            for(j=0;j<26;j++)
            {
                string f="";
                f=f+(char)('a'+i);
                f=f+(char)('a'+j);
                if(st.find(f)==st.end())
                {
                    cout<<f<<endl;
                    return;
                }
            }
        }

        set<string>st2;
        for(i=0;i<n-2;i++)
        {
            string f="";
            f=f+s[i];
            f=f+s[i+1];
            f=f+s[i+2];
            st2.insert(f);
        }
        for(i=0;i<26;i++)
        {
            for(j=0;j<26;j++)
            {
                for(k=0;k<26;k++)
            {
                string f="";
                f=f+(char)('a'+i);
                f=f+(char)('a'+j);
                f=f+(char)('a'+k);
                if(st2.find(f)==st2.end())
                {
                    cout<<f<<endl;
                    return;
                }
            }
            }
        }

}
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int t=1;
            cin>>t;
            while(t--){
            //    cout<<"Case #"<<i<<": ";
                solve();
    }
    return 0;
}
