#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<string>rt;
    for(int ji=1;ji<=t;ji++)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            v.push_back(p%2);
        }


        int flag=0;

        for(int i=0;i<n-2;i++)
        {
            if(v[i]!=v[i+2])
            {
                flag++;
            }
        }
        if(flag>0)
        {
            rt.push_back("NO");
        }
        else
        {
            rt.push_back("YES");
        }
    }
    for(int i=0;i<rt.size();i++)
    {
        cout<<rt[i]<<endl;
    }
}