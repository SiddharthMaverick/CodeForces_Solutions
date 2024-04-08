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

        int c1=0;
        int c2=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                c2++;
            }
            else
            {
                c1++;
            }
        }

        int p=1;
        if(c1%2 !=c2%2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(c2%2==0)
            {
                cout<<"YES"<<endl;
            }
            else{
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(a[i]%2!=a[j]%2 && abs(a[i]-a[j])==1 )
                    {
                        if(p==1)
                        {
                            cout<<"YES"<<endl;
                        }
                        p=0;

                    }
                }
            }
        }
        }
        if(p==1)
        {
            cout<<"NO"<<endl;
        }

    }



}