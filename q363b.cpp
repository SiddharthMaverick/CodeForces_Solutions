#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    vector<int>h(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }

    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum=sum+h[i];
    }

    int ind=0,min1=sum;

    
    for(int i=k;i<n;i++)
    {
        sum=sum+h[i]-h[i-k];
        if(sum<min1)
        {
            min1=sum;
            ind=i-k+1;
        }
        
    }

    cout<<ind+1<<endl;

}