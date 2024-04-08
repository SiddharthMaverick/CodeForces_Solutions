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
        int count=0;
        for(int j=0;j<n-1;j++)
        {
            int max1=max(a[j],a[j+1]);
            int min1=min(a[j],a[j+1]);

            if(max1>min1*2)
            {
                int temp=min1;
                int k=0;
                while(temp*2<max1)
                {
                    temp=temp*2;
                    k++;
                }
                count=count+k;
            }
            
        }
        cout<<count<<endl;
    }
}