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
        int min1=numeric_limits<int>::max();

        for(int i=0;i<n;i++)
        {
            if(min1>a[i])
            {
                min1=a[i];
            }
        }
        int c=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>min1)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}