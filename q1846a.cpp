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

        int count=0;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;

            if(a>b)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}