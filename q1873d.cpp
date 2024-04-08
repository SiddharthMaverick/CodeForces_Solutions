#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int n,k;
        cin>>n>>k;
        string st;
        cin>>st;

        int sum=0;

        for(int i=0;i<st.length();i++)
        {
            if(st[i]=='B')
            {
                i=i+k-1;
                sum++;
            }
        }
        cout<<sum<<endl;

    }
}