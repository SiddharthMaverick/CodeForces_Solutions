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
        for(int k=0;k<n;k++)
        {
            int b;
            cin>>b;
            int sum=0;
            for(int i=0;i<b;i++)
            {
                char ch;
                cin>>ch;
                if(ch=='U')
                {
                    sum=sum+1;
                }
                else
                {
                    sum=sum-1;
                }
            }
            if(a[k]-sum<0)
            {
                a[k]=(10+a[k]-sum)%10;
            }
            else
            {
                a[k]=(a[k]-sum)%10;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}