#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int n,x,y;
        cin>>n>>x>>y;

        vector<long long int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        map<pair<long long int,long long int>,long long int> mp;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            long long int ax=a[i]%x;
            long long int ay=a[i]%y;

            sum+=mp[make_pair((x-ax)%x,ay)];
            mp[make_pair(ax,ay)]++;
        }
        cout<<sum<<endl;


    }
}