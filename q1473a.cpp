#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<string>rt;
    for(int ji=1;ji<=t;ji++)
    {
        int n,d;
        cin>>n>>d;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            v.push_back(p);
        }

        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>d)
            {
                flag=1;
            }
        }


        if(flag==1)
        {
        int min1=v[0];
        int lock1=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]<min1)
            {
                min1=v[i];
                lock1=i;
            }
        }
        int min2=101;
        for(int i=0;i<n;i++)
        {
            if((v[i]<min2)&&(v[i]>=min1)&&(i!=lock1))
            {
                min2=v[i];
            }
        }
        if(min1+min2<=d)
        {
            rt.push_back("YES");
        }
        else
        {
            rt.push_back("NO");
        }
        }
        else
        {
            rt.push_back("YES");
        }
        cout<<rt[rt.size()-1]<<endl;
    }
}