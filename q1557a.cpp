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
        vector<int>v(n);
        double sum=0;
        double max=numeric_limits<double>::lowest();
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(max<v[i])
            {
                max=v[i];
            }
            sum=sum+v[i];
            
        }
        
        double k=((sum-max)/(n-1))+max;

        cout<<setprecision(11)<<k<<endl;
        

        
    }
}