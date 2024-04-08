#include<bits/stdc++.h>
using namespace std;
bool Uniqueornot(string vt, char ch1)
{
    int flag=1;
                
    for(int j=0;j<vt.length();j++)
    {
        if(ch1==vt[j])
        {
            flag=0;
        }
    }

    if(flag==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        string st;
        cin>>st;

        string t="";

        int c=0;


        for(int i=0;i<st.length();i++)
        {
            char ch=st[i];
            
            if(Uniqueornot(t,ch))
            {
                t=t+ch;
            }
            if(t.length()==4)
            {
                t="";
                c++;
                i--;
            }

        }

        if(t!="")
        {
            cout<<c+1<<endl;
        }
        else
        {
            cout<<c<<endl;
        }

    }
}