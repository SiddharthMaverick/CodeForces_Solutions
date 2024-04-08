#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    for(int ji=1;ji<=t;ji++)
    {
        int n,m;
        cin>>n>>m;

        vector<int>a(n);
        vector<int>b(m);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }

        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(c==1)
                {
                    break;
                }
                if(a[j]==b[i])
                {
                    cout<<"YES"<<endl;
                    cout<<1<<" "<<a[j]<<endl;
                    c=1;
                }
            }
        }
        if(c==0)
        {
            cout<<"NO"<<endl;
        }

    }


}