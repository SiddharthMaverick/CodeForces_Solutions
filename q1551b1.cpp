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
        
        int n=st.length()/2;

        int ce=0,co=0,cones=0;

        for(char ch='a';ch<='z';ch++)
        {
            int count=0;
            for(int i=0;i<st.length();i++)
            {
                if(ch==st[i])
                {
                    count++;
                }
            }
            if(count==1)
            {
                cones=cones+1;
            }
            else if(count%2==0 && count!=0)
            {
                ce=ce+1;
            }
            else if(count%2==1)
            {
                co=co+1;
            }
        }
        int total=(co)+(ce)+(cones/2);

        cout<<total<<endl;

    }
}