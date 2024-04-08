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

        int pt1=0;
        int count=0;
        int count2=0;

        for(int i=0;i<st.length();i++)
        {
            if(st[i]=='1')
            {
                pt1=1;
            }
            while((st[i]=='0')&&(pt1==1))
            {
                count++;
                i++;
            }
            if(st[i]=='1')
            {
                count2=count2+count;
                count=0;
            }
        }
        cout<<count2<<endl;
    }
}