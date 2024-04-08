#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<long long int>v;
    long long int arr[10];
    int k=1;
    for(int i=0;i<10;i++)
    {
        arr[i]=k;
        k=k*10;
    }
    for(int ji=1;ji<=t;ji++)
    {
        int m;
        cin>>m;

        int p=9;
        while(arr[p]>m)
        {
            p--;
        }

        v.push_back(m-arr[p]);


    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}