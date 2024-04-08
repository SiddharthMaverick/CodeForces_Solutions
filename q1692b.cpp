#include<bits/stdc++.h>
using namespace std;
void merge(int l,int mid,int r,vector<int>&v)
{
    int n1=mid-l+1;
    int n2=r-mid;
    vector<int>pi;
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(v[l+i]<v[mid+1+j])
        {
            pi.push_back(v[l+i]);
            i++;
        }
        else
        {
            pi.push_back(v[mid+1+j]);
            j++;
        }
    }
    while(i<n1)
    {
        pi.push_back(v[l+i]);
        i++;
    }
    while(j<n2)
    {
        pi.push_back(v[mid+1+j]);
        j++;
    }
    for(int i=0;i<pi.size();i++)
    {
        v[l+i]=pi[i];
    }
}
void mergeSort(int l,int r,vector<int>&v)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(l,mid,v);
        mergeSort(mid+1,r,v);
        merge(l,mid,r,v);
    }
}
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int n;
        cin>>n;

        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            a.push_back(p);
        }


        mergeSort(0,a.size()-1,a);


        int c2=0;
        int count=0;

        for(int i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                c2++;
            }
            if(a[i]==a[i+1])
            {
                count++;
            }
        }
        if(n%2==0)
        {
            if((c2+1)%2==0)
            {
                cout<<c2+1<<endl;
            }
            else
            {
                cout<<c2<<endl;
            }
        }
        else
        {
            if((c2+1)%2==0)
            {
                cout<<c2<<endl;
            }
            else
            {
                cout<<c2+1<<endl;
            }
        }

        
    }
}