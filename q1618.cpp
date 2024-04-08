#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<int>v;
        for(int i=0;i<7;i++)
        {
            int p;
            cin>>p;
            v.push_back(p);
        }
        int c=v[v.size()-1]-v[0]-v[1];
        cout<<v[0]<<" "<<v[1]<<" "<<c<<endl;
    }
}