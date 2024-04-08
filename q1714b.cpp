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

        vector<int>v;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            arr[i]=0;
            v.push_back(p);
        }
        
        int q=0;

        for(int i=n-1;i>=0;i--)
        {
            
            if(arr[v[i]-1]==0)
            {
                arr[v[i]-1]=1;
            }
            else
            {
                break;
            }
            q++;
        }
        cout<<v.size()-q<<endl;


    }
}