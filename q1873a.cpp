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
        int count=0;
        for(int i=0;i<st.length();i++)
        {
            if(st[i]-'a'==i)
            {
                count++;
            }
        }
        if(count>=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}