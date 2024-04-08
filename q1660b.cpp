#include<bits/stdc++.h>
using namespace std;
vector<long long int> Partition3(vector<long long int>&v1,int l,int r)
{
    long long int x=v1[l];
    int j=l;
    int k=r;
    for(int i=l;i<=r;i++)
    {
        if(v1[i]<x)
        {
            int temp=v1[j];
            v1[j]=v1[i];
            v1[i]=temp;
            j=j+1;
        }
    }

    for(int i=r;i>=l;i--)
    {
        if(v1[i]>x)
        {
            int temp=v1[k];
            v1[k]=v1[i];
            v1[i]=temp;
            k--;
        }
    }

    for(int i=j;i<=k;i++)
    {
        v1[i]=x;
    }

    vector<long long int>b;
    b.push_back(j);
    b.push_back(k);
    return b ;
}
void QuickSort3(vector<long long int>&v1,int l,int r)
{
    if(l>=r)
    {
        return;
    }

    int k = l + rand()%(r-l+1);


    int temp=v1[l];
    v1[l]=v1[k];
    v1[k]=temp;

    vector<long long int>m=Partition3(v1,l,r);

    QuickSort3(v1,l,m[0]-1);
    QuickSort3(v1,m[1]+1,r);

}
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int n;
        cin>>n;
        vector<long long int>v(n);

        long long int sum=0;

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        if(n==1)
        {
            if(v[0]==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<n-1;j++)
                {
                    if(v[j]>v[j+1])
                    {
                        long long int temp=v[j];
                        v[j]=v[j+1];
                        v[j+1]=temp;
                    }
                }
            }
            
            
            

            if(v[n-1]-v[n-2]>1)
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