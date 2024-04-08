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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            v.push_back(p);
        }

        int ce=0;
        int co=0;

        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0)
            {
                ce++;
            }
            if(v[i]%2==1)
            {
                co++;
            }
        }

        int min1=min(ce,co);

        cout<<min1<<endl;


    }
}