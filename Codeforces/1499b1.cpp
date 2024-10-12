
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,i;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        cin>>s;
            m=-1,n=1000;
            for(i=0; i<=(s.size()-2);i++)
            {
                if(s[i]=='1'&&s[i+1]=='1'){
                    n=i;
                    break;
                }
            }
            int ans=1;
            for(i=n; i<=(s.size()-2); i++)
            {
                if(s[i]=='0'&&s[i+1]=='0')
                {
                    ans=0;
                    break;
                }
            }
            if(ans==1) {printf("YES\n");
            }
            else {printf("NO\n");
            }
    }
    return 0;
}
