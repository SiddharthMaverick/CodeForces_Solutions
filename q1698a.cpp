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
        
        int p;

        for(int i=0;i<n;i++)
        {
            int k;
            int c=1;
            for(int j=0;j<n;j++)
            {
                if(c!=0 && j!=i)
                {
                    k=a[j];
                    c=0;
                }
                else if(j!=i)
                {
                    k=k^a[j];
                }
            }
            if(a[i]==k)
            {
                p=k;
                break;
            }
        }
        cout<<p<<endl;

    }
}