#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        long long int n;
        cin>>n;

        vector<long long int>rej;

        vector<pair<int,long long int>>v1;

        for(int i=0;i<n;i++)
        {
            int a,x;
            cin>>a>>x;

            v1.push_back(make_pair(a,x));


        }

        long long int start=0,end=numeric_limits<int>::max();

        for(int j=0;j<n;j++)
        {
            if(v1[j].first==1 && v1[j].second>start)
            {
                start=v1[j].second;
            }
            if(v1[j].first==2 && v1[j].second<end)
            {
                end=v1[j].second;
            }

            if(v1[j].first==3)
            {
                rej.push_back(v1[j].second);
            }
        }
        
        int c=0;
        if(start<=end)
        {

        for(int j=0;j<rej.size();j++)
        {
            if(rej[j]<=end && rej[j]>=start)
            {
                c++;
            }
        }
        cout<<end-start-c+1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}