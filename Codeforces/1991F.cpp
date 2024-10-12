#include<bits/stdc++.h>
using namespace std;
vector<int>cmbn;
bool func(vector<int>&k)
{
    for(int i=0; i<cmbn.size(); i++){
        int x1,y1,z1,x2,y2,z2;
        x1=x2=y1=y2=z1=z2=-1;
        for(int j=5; j>=0; j--){
            if((cmbn[i]&(1<<j))!=0){
                if(x1==-1) x1 = k[5-j];
                else if(y1==-1)y1 = k[5-j];
                else z1 = k[5-j];
            }
            else
            {
                if(x2==-1) x2 = k[5-j];
                else if(y2==-1)y2 = k[5-j];
                else z2 = k[5-j];
            }
        }
        //if(x1!=-1 && y1!=-1 && z1!=-1 && x2!=-1 && y2!=-1 && z2!=-1)
        if((x1+y1)>z1 && (x2+y2)>z2)
        {
            cout<<x1<<" "<<y1<<" "<<z1<<endl;
            cout<<x2<<" "<<y2<<" "<<z2<<endl;
            return true;
        }
    }
    return false;
}
int main()
{
    int n,q,i;
    for(int i=7; i<=56; i++)
    {
        int x =0;
        for(int j = 0; j<=5; j++)
        {
            if((i&(1<<j))!=0)
            {
                x++;
            }
        }
        if(x==3)
        {
            cmbn.push_back(i);
        }
    }
    /*cout<<cmbn.size()<<endl;
    for(int i=0; i<cmbn.size(); i++)
    {
        cout<<cmbn[i]<<" ";
    }*/
    cin>>n>>q;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if((r-l+1)>=64)
        {
            cout<<"YES"<<endl;
            continue;
        }
        vector<int>v, v1;
        for(int i=l; i<=r; i++)
        {
            v.push_back(a[i]);
        }
        sort(v.begin(), v.end());
        v1 = v;
        int c = 0, e;
        /*for(int i=0; i<v.size()-2; i++)
        {
            if((v[i]+v[i+1])>v[i+2])
            {
                c++;
                e=i;
                break;
            }
        }
        if(c==1)
        {
            v.erase(v.begin()+e);
            v.erase(v.begin()+e);
            v.erase(v.begin()+e);
        }
        for(int i=0; i<v.size()-2; i++)
        {
            if((v[i]+v[i+1])>v[i+2])
            {
                c++;
                break;
            }
        }
        if(c==2)
        {
            cout<<"YES"<<endl;
            continue;
        }*/
        for(int i=0; i<v1.size()-5; i++)
        {
            vector<int>k;
            for(int j = i; j<=i+5; j++)
            {
                k.push_back(v1[j]);
            }
            if(func(k))
            {
                c=2;
                break;
            }
        }
        if(c==2)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
