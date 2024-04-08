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
        vector<int>h(n);
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
        }
        int c=0;
        int c2=0;
        for(int i=0;i<n;i++)
        {
            if(h[i]==1)
            {
                c++;
            }
        }
        
        cout<<n-c/2<<endl;
    }
}