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
        int arr[n];
        string st;
        cin>>st;

        int flag=0;


        for(int i=0;i<st.length();i++)
        {
            char ch=st[i];
            for(int j=0;j<st.length();j++)
            {
                if(st[j]==ch && (i+j)%2==1)
                {
                    flag=1;
                }
            }
        }

        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }




}