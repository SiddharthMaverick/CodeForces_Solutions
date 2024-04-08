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

        vector<int>v1;
        vector<int>v2;
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                v1.push_back(a[i]);
            }
            else
            {
                if(v1[v1.size()-1]>a[i])
                {

                }
            }
        }
        



    }
}