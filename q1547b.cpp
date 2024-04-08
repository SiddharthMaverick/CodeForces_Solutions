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

        int posa=0;
        int flag=0;


        for(int i=0;i<st.length();i++)
        {
            if(st[i]=='a')
            {
                posa=i;
                flag=1;
            }
        }


        if(flag==1 && st.length()!=1)
        {
            int L=posa;
            int R=posa;
            int couf=0;
            int c=posa;
            for(int i=0;i<st.length()-1;i++)
            {
                
                if(st[L-1]-st[c]==1)
                {
                    c=L-1;
                    L=L-1;
                }
                else if(st[R+1]-st[c]==1)
                {
                    c=R+1;
                    R=R+1;
                }
                else
                {
                    couf=1;
                    break;
                }
            }
            if(couf==1)
            {

                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else if(st=="a")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}