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

        int a=3;
        int b=4;
        
        cout<<a<<" "<<b<<" ";
        for(int i=3;i<=n;i++)
        {
            int j=b+1;
            while((3*j)%(a+b)==1)
            {
                j++;
            }
            cout<<j<<" ";
            a=b;
            b=j;
        }

        

        cout<<endl;


    }

}