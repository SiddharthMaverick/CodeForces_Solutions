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

        vector<int>v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        map<int,int>mp;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(mp[v[i]]==0)
            {
                c++;
            }
            mp[v[i]]++;
        }

        int max=0;
        int max1=0;

        for(int i=0;i<n;i++)
        {
            if(max<mp[v[i]])
            {
                max=mp[v[i]];
                max1=v[i];
            }
        }
        if(n>1)
        {
        if(max>1)
        {
            if(max==c)
            {
                cout<<min(max-1,c)<<endl;
            }
            else
            {
                cout<<min(max,c)<<endl;
            }

        }
        else
        {
            cout<<1<<endl;
        }
        }
        else
        {
            cout<<0<<endl;
        }
    }
}