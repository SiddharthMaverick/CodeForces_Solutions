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

        vector<int>a(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int max=0;
        int min=numeric_limits<int>::max();

        int max_pos=0;
        int min_pos=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                max_pos=i;
            }
            if(a[i]<min)
            {
                min=a[i];
                min_pos=i;
            }
        }

        if(min==max)
        {
            cout<<"NO"<<endl;
        }
        else
        {

            cout<<"YES"<<endl;
            cout<<a[max_pos]<<" "<<a[min_pos]<<" ";
            for(int i=0;i<n;i++)
            {
                if(i!=max_pos && i!=min_pos)
                {
                    cout<<a[i]<<" ";
                }
            }
            cout<<endl;
            
        }
        




    }

}