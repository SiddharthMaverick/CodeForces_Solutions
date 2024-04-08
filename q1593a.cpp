#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        int max1=max(a[0],max(a[1],a[2]));

        int b[3];
        int count=0;
        for(int i=0;i<3;i++)
        {
            b[i]=max1-a[i];
            if(b[i]==0)
            {
                count++;
            }
        }
        if(count>1)
        {
            for(int i=0;i<3;i++)
            {
                if(b[i]==0)
                {
                    cout<<1<<" ";
                }
                else
                {
                    cout<<b[i]+1<<" ";
                }
            }
        }
        else
        {
            for(int i=0;i<3;i++)
            {
                if(b[i]!=0)
                {
                    cout<<b[i]+1<<" ";
                }
                else
                {
                    cout<<0<<" ";
                }
            }
        }
        cout<<endl;

    }
}