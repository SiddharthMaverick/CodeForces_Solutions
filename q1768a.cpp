#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int k;
        cin>>k;

        
        if(k==2)
        {
            cout<<"1"<<endl;
        }
        else if(k==0 || k==1 )
        {
            cout<<"-1"<<endl;
        }
        else if(k==3)
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<k-1<<endl;
        }

    }

}