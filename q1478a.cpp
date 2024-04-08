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

        int c=0;
        int max1=0;

        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                c++;
            }
            else
            {
                if(c>=max1)
                {
                    max1=c;
                }
                c=0;
            }
        }

        cout<<max(max1,c)+1<<endl;


    }
}