#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[1030],i,j,c,val,ans;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        set<long long>s;
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
            s.insert(a[i]);
        }
        ans=-1;
        for(j=1;j<1024;j++){
            set<long long>s1;
            set<long long>::iterator it;
                for(it=s.begin();it!=s.end();it++){
                    s1.insert(*it);
                }
                c=0;
            for(i=0;i<n;i++){
                val=a[i]^j;
                if(s1.find(val)==s1.end()){
                        c=1;
                    break;
                }else{
                    s1.erase(s1.find(val));
                }
            }
            if(c==0){
                ans=j;
                break;
            }
        }
            printf("%lld\n",ans);
    }
    return 0;
}
