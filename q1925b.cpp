#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int x,n;

        cin>>x>>n;

        
        if(n==1)
        {
            cout<<x<<endl;
        }
        else
        {
            int ans=1;
            for(int i=1;i*i<=x;i++)
            {
                if(x%i==0)
                {
                    if(x/i>=n)
                    {
                        ans=max(ans,i);
                    }
                    if(i>=n)
                    {
                        ans=max(ans,x/i);
                    }
                    
                }
            }

            cout<<ans<<endl;
        }
    }
}