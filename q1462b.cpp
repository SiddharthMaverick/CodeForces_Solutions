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
        string st;
        cin>>st;

        int flag=0;
        for(int i=0;i<=4;i++)
        {
            
            cout<<st.substr(n-4+i,4-i)<<endl;
            if(st.substr(0,i)+st.substr(n-4+i,4-i)=="2020")
            {
                flag=1;
                
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}