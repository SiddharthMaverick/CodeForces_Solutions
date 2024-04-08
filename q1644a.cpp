#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        string st;
        cin>>st;

        int rp=0,gp=0,bp=0;
        int r=0,g=0,b=0;

        for(int i=0;i<st.length();i++)
        {
            if(st[i]=='r')
            {
                rp=1;
            }
            if(st[i]=='g')
            {
                gp=1;
            }
            if(st[i]=='b')
            {
                bp=1;
            }

            if(st[i]=='R' && rp==1)
            {
                r=1;
            }
            if(st[i]=='B' && bp==1)
            {
                b=1;
            }
            if(st[i]=='G' && gp==1)
            {
                g=1;
            }
        }
        if(r+b+g==3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}