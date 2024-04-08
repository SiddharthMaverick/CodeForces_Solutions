#include<bits/stdc++.h>
using namespace std;
unsigned long long calculateNCr(long long int n, long long int r)
{
    if (r < 0 || r > n)
    {
        return 0;
    }

    unsigned long long result = 1;

    // Calculate n! / r!
    for (int i = 1; i <= r; ++i)
    {
        result *= n--;
        result /= i;
    }

    return result;
}
vector<long long int> Partition3(vector<long long int>&v1,long long int l,long long int r)
{
    long long int x=v1[l];
    long long int j=l;
    long long int k=r;
    for(int i=l;i<=r;i++)
    {
        if(v1[i]<x)
        {
            long long int temp=v1[j];
            v1[j]=v1[i];
            v1[i]=temp;
            j=j+1;
        }
    }

    for(long long int i=r;i>=l;i--)
    {
        if(v1[i]>x)
        {
            long long int temp=v1[k];
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
void QuickSort3(vector<long long int>&v1,long long int l,long long int r)
{
    if(l>=r)
    {
        return;
    }

    long long int k = l + rand()%(r-l+1);


    long long int temp=v1[l];
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
        long long int n;
        cin>>n;

        vector<long long int>v;
        
        for(long long int i=0;i<n;i++)
        {
            long long int p;
            cin>>p;
            v.push_back(p);
        }

        QuickSort3(v,0,n-1);

        vector<long long int>f;
        int c=0;

        
        
        for(long long int i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1])
            {
                c++;
            }
            else
            {
                f.push_back(c+1);
                c=0;
            }
        }
        f.push_back(c+1);
        
        
        long long int sumeq=0;

        for(long long int i=0;i<f.size();i++)
        {
            if(f[i]>3)
            {
                sumeq=sumeq+calculateNCr(f[i], 3);
            }
            else if(f[i]==3)
            {
                sumeq=sumeq+1;
            }
        }

        long long int sumiso=0;
        vector<long long int>g;
        for(long long int i=0;i<f.size();i++)
        {
            if(f[i]>2)
            {
                g.push_back(calculateNCr(f[i],2));
            }
            else if(f[i]==2)
            {
                g.push_back(1);
            }
            else
            {
                g.push_back(0);
            }
        }

        vector<long long int>sig;
        long long int s1=0;
        for(int i=0;i<f.size();i++)
        {
            sig.push_back(s1);
            s1=s1+f[i];
            
        }
        

        
        for(long long int i=0;i<f.size();i++)
        {
            sumiso=sumiso+(g[i]*sig[i]);
        }
        

        cout<<sumiso+sumeq<<endl;

    }
        
}
