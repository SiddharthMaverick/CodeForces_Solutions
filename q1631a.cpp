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
        vector<int>b;

        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            a.push_back(p);
        }

        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            b.push_back(p);
        }

        for(int i=0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                int temp=a[i];
                a[i]=b[i];
                b[i]=temp;
            }
        }
        int max1=a[0];
        int max2=b[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]>max1)
            {
                max1=a[i];
            }
            if(b[i]>max2)
            {
                max2=b[i];
            }
        }
        int min1=max2*max1;

        cout<<min1<<endl;
    }
}