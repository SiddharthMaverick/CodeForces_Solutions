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

        vector<long long int>a(n);
        long double sum=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum*a[i];
        }

        long double sum1=1;
        int flag=0;
        int pos1=0;


        for(int i=0;i<n;i++)
        {
            sum1=sum1*a[i];
            if(sum1==(sum/sum1))
            {
                pos1=i;
                flag=1;
                break;
            }

        }


        if(flag==1)
        {
            cout<<pos1+1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }


    }
}