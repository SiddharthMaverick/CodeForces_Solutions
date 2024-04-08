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
        
        int pointer=0;

        vector<string>v;
        for(int i=0;i<n-1;i++)
        {
            string p=st.substr(i,2);
            v.push_back(p);
        }
        vector<string>gi;
        for(int i=0;i<n-1;i++)
        {
            int c=0;
            for(int j=0;j<gi.size();j++)
            {
                if(gi[j]==v[i])
                {
                    c=1;
                }
            }
            if(c==0)
            {
                pointer++;
            }
            gi.push_back(v[i]);
            
        }

        cout<<pointer<<endl;


    }
}