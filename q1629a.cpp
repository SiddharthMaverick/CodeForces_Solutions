#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    for(int ji=1;ji<=t;ji++)
    {

        int n,k;
        cin>>n>>k;

        vector<int>a;
        vector<int>b;

        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            a.push_back(p);
        }
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            b.push_back(p);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {

                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;

                    temp=b[j];
                    b[j]=b[j+1];
                    b[j+1]=temp;

                }
            }
        }


        int i=0;
        while(k>=a[i] && i<n)
        {
            k=k+b[i];
            i++;
        }
        cout<<k<<endl;

    }
}