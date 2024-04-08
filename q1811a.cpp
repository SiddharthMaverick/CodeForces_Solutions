#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        long long int n;
        cin>>n;
        char d;
        cin>>d;
        string st;
        cin>>st;

        int count=0;
        string st1="";
        for(int i=0;i<st.length();i++)
        {
            if((st[i]-'0'<d-'0')&&(count==0))
            {
                st=st.substr(0,i)+d+st.substr(i);
                count=1;
                break;
            }
        }
        if(count==0)
        {
            st=st+d;
        }
        cout<<st<<endl;
    }
}