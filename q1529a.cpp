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
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            a.push_back(p);
        }
        int min1=a[0];

        for(int i=0;i<n;i++)
        {
            if(min1>a[i])
            {
                min1=a[i];
            }
        }

        int count=0;
        for(int i=0;i<n;i++)
        {
            if(min1==a[i])
            {
                count++;
            }
        }

        cout<<(n-count)<<endl;

    }
}