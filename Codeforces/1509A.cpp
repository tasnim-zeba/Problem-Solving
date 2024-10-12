#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c1,c2,p,q,r;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        c1=c2=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='T'){c2++;
            }else if(s[i]=='M'){c1++;}
        }
        if(2*c1!=c2)
        {cout<<"NO"<<endl;
        }else{
            p=0;
            q=0;
            r=-1;
            for(i=0;i<s.size();i++)
            {
                if(s[i]=='T')
                {p++;
                }else if(s[i]=='M')
                {p--;
                if(p<0){r=1;
                    }
                }
            }
            for(i=s.size()-1;i>=0;i--)
            {
                if(s[i]=='T')
                {q++;
                }else if(s[i]=='M')
                {q--;
                    if(q<0){r=1;
                    }
                }
            }
            if(r==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
