#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[2005],i,se,so,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=1;i<=2*n;i++){
            scanf("%d",&a[i]);
        }
        vector< pair<int,int> >ve;
        vector< pair<int,int> >vo;
        for(i=1;i<=2*n;i++){
                if(a[i]%2==0){
                    ve.push_back(make_pair(a[i],i));
                }
                else  if(a[i]%2!=0){
                    vo.push_back(make_pair(a[i],i));
                }
        }
        se=ve.size();
        so=vo.size();
        if(se==0){
            for(i=0;i<so-2;i=i+2){
                printf("%d %d\n",vo[i].second,vo[i+1].second);
            }
        }
        else if(so==0){
            for(i=0;i<se-2;i=i+2){
                printf("%d %d\n",ve[i].second,ve[i+1].second);
            }
        }
        else if(se%2==0){
            for(i=0;i<se;i=i+2){
                printf("%d %d\n",ve[i].second,ve[i+1].second);
            }
            for(i=0;i<so-2;i=i+2){
                printf("%d %d\n",vo[i].second,vo[i+1].second);
            }
        }else{
             for(i=0;i<se-1;i=i+2){
                printf("%d %d\n",ve[i].second,ve[i+1].second);
            }
            for(i=0;i<so-1;i=i+2){
                printf("%d %d\n",vo[i].second,vo[i+1].second);
            }

        }
    }
    return 0;
}
