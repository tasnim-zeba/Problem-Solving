#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    int t,n,i,j,p1,p2,ti,tj,k;
    cin>>t;
    while(t--)
    {
        string s,a,b,c,d,c1,b1;
        a=b=c=d=c1=b1="";
        cin>>s;
        n=s.size();
        p1=0,p2=n-1;
        k=0;
        for(i=0,j=n-1; i<=j;)
        {
            if(s[i]==s[j])
            {
                a=a+s[i];
                if(i!=j)d=d+s[i];
                i++;
                j--;

            }
            else
            {
                p1=i;
                p2=j;
                break;
            }
        }
        if(i>j);
        else
        {
            for(j=p2; j>=p1 ; j--)
            {
                tj=j;
                for(i=p1; i<=tj ; )
                {
                    if(s[i]==s[tj])
                    {
                        b=b+s[i];
                        if(i!=tj)c=c+s[i];
                        i++;
                        tj--;
                    }
                    else
                    {
                        b.clear();
                        c.clear();
                        break;
                    }
                }
                if(i>tj)
                {
                    break;
                }
            }

            for(j=p1; j<=p2 ; j++)
            {
                tj=j;
                for(i=p2; i>=tj ; )
                {
                    if(s[i]==s[tj])
                    {
                        b1=b1+s[i];
                        if(i!=tj)c1=c1+s[i];
                        i--;
                        tj++;
                    }
                    else
                    {
                        b1.clear();
                        c1.clear();
                        break;
                    }
                }
                if(i<tj)
                {
                    break;
                }
            }

        }

        reverse(c.begin(),c.end());
        reverse(d.begin(),d.end());
        reverse(c1.begin(),c1.end());
        string ans1=a+b+c+d,ans2=a+b1+c1+d;
        if(ans1.size()>=ans2.size())cout<<ans1<<endl;
        else cout<<ans2<<endl;
    }
}
