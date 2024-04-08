#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        vector<int>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            v.push_back(p);
        }


        int max=0;
        for(int k=0;k<n;k++)
        {
            int b=1;
            for(int j=0;j<n;j++)
            {
                
                if(j==k)
                {
                    b=b*(v[j]+1);
                }
                else
                {
                    b=b*v[j];
                }
            }
            if(b>max)
            {
                max=b;
            }
        }
        cout<<max<<endl;
    }
}