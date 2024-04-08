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
        int cp=0;
        int cm=0;
        for(int i=0;i<st.length();i++)
        {
            if(st[i]=='+')
            {
                cp++;
            }
            if(st[i]=='-')
            {
                cm++;
            }
        }

        int l=abs(cp-cm);
        cout<<l<<endl;
    }
}