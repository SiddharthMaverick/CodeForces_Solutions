#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>rt;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>v;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            sum=sum+p;
            
            v.push_back(p);
        }

        if(sum%n==0)
        {
            int d=sum/n;
            int count=0;
            for(int i=0;i<n;i++)
            {
                if(v[i]>d)
                {
                    count++;
                }
            }
            rt.push_back(count);
        }
        else
        {
            rt.push_back(-1);
        }

    }
    for(int i=0;i<rt.size();i++)
    {
        cout<<rt[i]<<endl;
    }
}