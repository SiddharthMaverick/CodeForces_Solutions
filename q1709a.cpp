#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int x;
        cin>>x;
        vector<int>v;
        for(int i=0;i<3;i++)
        {
            int p;
            cin>>p;
            v.push_back(p);
        }

        int count=0;
        while(x!=0)
        {
            x=v[x-1];
            count++;
        }
        if(count==3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}