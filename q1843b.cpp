#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(long long int ji=1;ji<=t;ji++)
    {
        long long int n;
        cin>>n;

        vector<long long int>a(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int sum=0;
        long long int cv=0;
        

        for(int i=0;i<n;i++)
        {
            sum=sum+abs(a[i]);
        }

        long long int f=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]<0 && f==-1)
            {
                cv++;
                f=1;
            }
            if(a[i]>0)
            {
                f=-1;
            }
        }
        cout<<sum<<" "<<cv<<endl;
    }
}