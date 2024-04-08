#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int n,k;
        cin>>n>>k;

        vector<int>a(n);
        vector<int>b(n);
        

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        int fm=0;
        int suma=0;
        int max1=0;
        int sumb=0;
        for(int i=0;i<min(n,k);i++)
        {
            suma+=a[i];
            max1=max(max1,b[i]);

            sumb=max(sumb,suma+max1*(k-i-1));

        }
        cout<<sumb<<endl;
    }
}