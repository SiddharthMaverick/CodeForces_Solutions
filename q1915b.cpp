#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        char ti;
        for(int i=0;i<3;i++)
        {
            string st;
            cin>>st;
            int a=0,b=0,c=0;
            for(int j=0;j<3;j++)
            {
                if(st[j]=='A')
                {
                    a=1;
                }
                if(st[j]=='B')
                {
                    b=1;
                }
                if(st[j]=='C')
                {
                    c=1;
                }
            }
            char k=(a!=1)?'A':(b!=1)?'B':(c!=1)?'C':'P';
            if(k!='P')
            {
                ti=k;
            }
        }

        cout<<ti<<endl;
    }
}