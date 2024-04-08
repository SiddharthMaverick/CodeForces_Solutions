#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int n,s,r;
        cin>>n>>s>>r;

        int y=s-r;

        cout<<y<<" ";

        vector<int>v(n-1);

        while(r!=0)
        {
            for(int i=0;i<n-1;i++)
            {
                if(r==0)
                {
                    break;
                }
                v[i]++;
                r--;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
}