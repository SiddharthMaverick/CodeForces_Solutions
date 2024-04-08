#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int n,m,k,H;
        cin>>n>>m>>k>>H;

        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            v.push_back(p);
        }
        int count=0;

        

        for(int i=0;i<n;i++)
        {
            int w=abs(v[i]-H);
            if(w%k==0 && w!=0)
            {
                if(w<=(m-1)*k)
                {
                    count++;
                }
            }
        }

        cout<<count<<endl;
    }
}