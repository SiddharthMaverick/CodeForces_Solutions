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

        vector<int>p(n);

        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }

        int c=0;

        for(int j=0;j<n;j++)
        {
            if(j+1==p[j])
            {
                c++;
            }
        }
        

        if(c>1 && c%2==0)
        {
            cout<<c/2<<endl;
        }
        else if(c>=1 && c%2==1)
        {
            cout<<(c/2)+1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }
}