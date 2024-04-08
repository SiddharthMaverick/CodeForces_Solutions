#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int a,b;
        cin>>a>>b;
        vector<int>v;
        for(int i=0;i<a;i++)
        {
            int p;
            cin>>p;
            v.push_back(p);
        }
        int count=0;
        for(int i=0;i<a;i++)
        {
            if(v[i]==b)
            {
                count=1;
            }
        }
        if(count==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}