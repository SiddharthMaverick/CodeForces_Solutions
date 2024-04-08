#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<string>rt;
    for(int ji=1;ji<=t;ji++)
    {
        string st;
        cin>>st;
        char s;
        cin>>s;
        int flag=0;
        for(int i=0;i<st.length();i++)
        {
            if(st[i]==s && i%2==0)
            {
                flag=1;
                rt.push_back("YES");
                break;
            }
        }
        if(flag==0)
        {
            rt.push_back("NO");
        }
    }
    for(int i=0;i<rt.size();i++)
    {
        cout<<rt[i]<<endl;
    }
}