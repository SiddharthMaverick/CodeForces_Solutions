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

        string ft="";
        for(int i=0;i<st.length();i++)
        {
            if(i%2==0)
            {
                ft=ft+st[i];
            }
        }
        cout<<ft<<endl;



    }
}