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
        
        int c=1;

        for(int i=0;i<st.length();i++)
        {
            if(c==1)
            {
                if(st[i]=='a')
                {
                    st[i]='b';
                }
                else
                {
                    st[i]='a';
                }
                c=c*-1;
            }
            else
            {
                if(st[i]=='z')
                {
                    st[i]='y';
                }
                else
                {
                    st[i]='z';
                }
                c=c*-1;
            }
        }

        cout<<st<<endl;
    }
}