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
        if(n==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        int c=1;
        cout<<"196"<<string(n-3,'0')<<endl;
        for(int i=0; i*2+3<=n; i++)
        {
            if(c==n)break;
            cout<<"1"<<string(i, '0')<<"6"<<string(i,'0')<<"9"<<string(n-(2*i+3),'0')<<endl;
            c++;
           if(c==n)break;
            cout<<"9"<<string(i, '0')<<"6"<<string(i,'0')<<"1"<<string(n-(2*i+3),'0')<<endl;
            c++;
        }
        //cout<<c<<endl;
    }
}
