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
        int mx = 0;
        while(n--)
        {
            int l;
            cin>>l;
            set<int>st;
            for(int i=1; i<=l; i++)
            {
                int x;
                cin>>x;
                st.insert(x);
            }
            int fmex=-1, smex=-1;
            int c=0;
            for(auto ch: st)
            {
                //cout<<ch<<" "<<c<<endl;
                if(ch==c){
                    c++;
                }
                else{
                    if(fmex==-1){
                        fmex=c;
                        c++;
                        if(ch==c){
                            c++;
                        }
                        else{
                            smex=c;
                            break;
                        }
                    }
                    else{
                        smex=c;
                        break;
                    }
                }
            }
            if(fmex==-1){
                fmex=c;
                smex=c+1;
            }
            else if(smex==-1){
                smex=c;
            }
            //cout<<c<<endl;
           // cout<<smex<<endl;
            mx = max(mx, smex);
        }
        //cout<<mx<<endl;
        int cnt =min(mx, m);
        ll ans = (cnt+1LL)*mx + (((m-cnt)*(m-cnt-1LL))/2)+ (mx+1LL)*(m-cnt);
        cout<<ans<<endl;
    }

}
