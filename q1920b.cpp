#include<bits/stdc++.h>
using namespace std;
vector<int> Partition3(vector<int>&v1,int l,int r)
{
    int x=v1[l];
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

    vector<int>b;
    b.push_back(j);
    b.push_back(k);
    return b ;
}
void QuickSort3(vector<int>&v1,int l,int r)
{
    if(l>=r)
    {
        return;
    }

    int k = l + rand()%(r-l+1);


    int temp=v1[l];
    v1[l]=v1[k];
    v1[k]=temp;

    vector<int>m=Partition3(v1,l,r);

    QuickSort3(v1,l,m[0]-1);
    QuickSort3(v1,m[1]+1,r);

}
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int n,k,x;
        
        cin>>n>>k>>x;

        vector<int>a;

        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            a.push_back(p);
        }
        
        QuickSort3(a,0,n-1);
        
        int maxsum=numeric_limits<int>::lowest();
        
        int sum=0;
        for(int i=n-1;i>n-1-x;i--)
        {
            sum=sum-a[i];
        }
        for(int i=n-1-x;i>=0;i--)
        {
            sum=sum+a[i];
        }

        maxsum=sum;

        for(int i=n-1 ,j=n-1-x; i>n-1-k;i-- ,j--)
        {
            sum+=a[i];
            if(j>=0)
            {
                sum-=2*a[j];
            }
            maxsum=max(maxsum,sum);
        }
        
        cout<<maxsum<<endl;


    }
}