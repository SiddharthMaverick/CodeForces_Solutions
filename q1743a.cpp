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

        
        int k=10-a.size();
        int p=k*(k-1)/2;

        int z=p*6;
        cout<<z<<endl;


    }
}