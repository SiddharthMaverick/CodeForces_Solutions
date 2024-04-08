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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        string st;
        cin>>st;
        
        vector<pair<int,char>>check(n);

        for(int i=0;i<n;i++)
        {
            check[i]=make_pair(a[i],st[i]);
        }

        int flag=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(check[i].first==check[j].first)
                {
                    if(check[i].second!=check[j].second)
                    {
                        flag=0;
                    }
                }
            }
        }

        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}