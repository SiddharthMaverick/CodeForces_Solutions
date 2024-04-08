#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;

        int a1=0,b1=0;
        if(a-x<0)
        {
            a1=abs(a-x);
        }
        if(b-y<0)
        {
            b1=abs(b-y);
        }


        if(a1+b1<=c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}