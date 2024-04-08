#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int n1;
        cin>>n1;
        string st;
        cin>>st;

        int count=0;
        int l=st.length();
        for(int i=0;i<l-1;i++)
        {
            if(st[i]!=st[i+1])
            {
                count++;
            }
        }
        if((l>2)||((l==2)&&(count==0)))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

}