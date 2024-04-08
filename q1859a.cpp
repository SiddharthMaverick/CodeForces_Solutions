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
        int n;
        cin>>n;
        vector<int>a(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        QuickSort3(a,0,n-1);
        if(a[0]==a[n-1])
        {
            cout<<-1<<endl;
        }
        else
        {
            int p=0;

            while(a[p]==a[0])
            {
                p++;
            }
            cout<<p<<" "<<n-p<<endl;

            for(int j=0;j<p;j++)
            {
                cout<<a[j]<<" ";
            }
            cout<<endl;
            for(int j=p;j<n;j++)
            {
                cout<<a[j]<<" ";
            }

        }
        
    }
}