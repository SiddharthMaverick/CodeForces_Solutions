#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int n;
        cin>>n;

        int d=n%10;
        
        string st=to_string(n);
        
        int c=0;
        for(int i=0;i<st.length();i++)
        {
            if((st[i]-'0')%2==0)
            {
                c++;
            }
        }
        if(n%2==0)
        {
            cout<<0<<endl;
        }
        else if((st[0]-'0')%2==0)
        {
            cout<<1<<endl;
        }
        else if(c>0)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}