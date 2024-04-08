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
        int l=st.length();

        int c1=0,c0=0;
        for(int i=0;i<l;i++)
        {
            if(st[i]=='1')
            {
                c1++;
            }
            if(st[i]=='0')
            {
                c0++;
            }
        }
        
        if(c1==c0)
        {
            cout<<c0-1<<endl;
        }
        else
        {
            cout<<min(c1,c0)<<endl;
        }
    }


}