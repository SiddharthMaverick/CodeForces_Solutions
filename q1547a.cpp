#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int xa,ya;
        cin>>xa>>ya;
        int xb,yb;
        cin>>xb>>yb;
        int xf,yf;
        cin>>xf>>yf;

        if((xa-xb==0)&&(xa-xf==0))
        {
            if(((ya<yf)&&(yf<yb))||((yb<yf)&&(yf<ya)))
            {
                cout<<2+abs(ya-yb)<<endl;
            }
            else
            {
                cout<<abs(ya-yb)<<endl;
            }
        }
        else if((ya-yb==0)&&(ya-yf==0))
        {
            if(((xa<xf)&&(xf<xb))||((xb<xf)&&(xf<xa)))
            {
                cout<<2+abs(xa-xb)<<endl;
            }
            else
            {
                cout<<abs(xa-xb)<<endl;
            }
        }
        else
        {
            cout<<abs(xa-xb)+abs(ya-yb)<<endl;
        }
    }
}