#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>rt;
    for(int ji=1;ji<=t;ji++)
    {
        int n;
        cin>>n;

        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            v.push_back(p);
        }
        int c=0;
        int max=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                c++;
                if(max<c)
                {
                    max=c;
                }
            }
            else
            {
                c=0;
            }
        }
        rt.push_back(max);
    }
    for(int i=0;i<rt.size();i++)
    {
        cout<<rt[i]<<endl;
    }
}