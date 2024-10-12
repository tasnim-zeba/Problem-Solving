#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string str1,str11;
        cin>>str1;
        str11=str1;
        reverse(str11.begin(),str11.end());
        if(k==0||(str11==str1))
        {
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}
