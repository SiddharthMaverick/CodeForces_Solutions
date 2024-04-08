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
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            v.push_back(p);
        }


        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size()-1;j++)
            {
                if(v[j]<v[j+1])
                {
                    int temp=v[j];
                    v[j]=v[j+1];
                    v[j+1]=temp;
                }
            }
        }

        int sum=0;
        int l=v.size();
        for(int i=0;i<(n/2);i++)
        {
            sum=sum+(v[i]-v[l-1-i]);
        }
        cout<<sum<<endl;
    }
}