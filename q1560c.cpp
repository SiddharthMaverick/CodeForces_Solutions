#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int k;
        cin>>k;

        int l1=floor(sqrt(k));

        int u1=ceil(sqrt(k));

        int p=k-(l1*l1);

        if(u1==l1)
        {
            cout<<u1<<" "<<1<<endl;
        }
        else if(p-u1==0)
        {
            cout<<u1<<" "<<u1<<endl;
        }
        else if(p-u1<0)
        {
            if(p==0)
            {
                p=1;
            }
            cout<<p<<" "<<u1<<endl;
        }
        else if(u1-p<0)
        {
            if(u1==0)
            {
                u1=1;
            }
            cout<<u1<<" "<<2*(u1)-p<<endl;
        }
    }

}