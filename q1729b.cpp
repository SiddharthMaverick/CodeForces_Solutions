#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    for(int ji=1;ji<=q;ji++)
    {
        int l;
        cin>>l;
        string tomake="";
        string st;
        cin>>st;
        for(int i=st.length()-1;i>=0;i--)
        {
            char d=st[i];
            if(d=='0')
            {
                int k=st[i-1]-'0';
                int f=st[i-2]-'0';
                int qw=f*10+k;
                char ch=qw+'a'-1;
                tomake=ch+tomake;
                i=i-2;
            }
            else
            {
                char ch=st[i];
                int fg=ch-'0';
                char ik=fg+'a'-1;
                tomake=ik+tomake;
            }
        }
        cout<<tomake<<endl;
    }
}