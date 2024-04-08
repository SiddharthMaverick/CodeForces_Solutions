#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        long long int n,q;
        cin>>n>>q;

        vector<long long int>c(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        long long int arr[q][2];

        for(long long int i=0;i<q;i++)
        {
            cin>>arr[i][0]>>arr[i][1];
        }
        long long int sum1=0;
        vector<long long int>summation(n+1);
        for(int i=0;i<n;i++)
        {
            summation[i]=sum1;
            sum1+=c[i];
            
        }

        for(int i=0;i<q;i++)
        {
            if(arr[i][0]==arr[i][1])
            {
                cout<<"NO"<<endl;
            }
            else if(arr[i][1]-arr[i][0]==1)
            {
                if(c[arr[i][0]]==c[arr[i][1]] && c[arr[i][1]]==1)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }
            }
            else
            {
                long long int sum2=0;
                sum2=summation[arr[i][1]]-summation[arr[i][0]-1];
                long long int avg=(sum2/(arr[i][1]-arr[i][0]+1));
                if(avg==1)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }
            }
        }

    }
}