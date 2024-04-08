#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>print;
    for(int ji=1;ji<=t;ji++)
    {
        int n;
        cin>>n;
        vector<int>v;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            v.push_back(p);
            m[p]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            m[v[i]]++;
        }
        vector<pair<int,int>>a;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(m[v[i]]==1)
            {
                a.push_back(make_pair(v[i],i));
                flag=1;
                m[v[i]]++;
            }
        }
        if(flag==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            int d=0;
            int min=numeric_limits<int>::max();
            for(int j=0;j<a.size();j++)
            {
                if(a[j].first<min)
                {
                    min=a[j].first;
                    d=a[j].second+1;
                }
            }


            cout<<d<<endl;
        }
    }

    
}