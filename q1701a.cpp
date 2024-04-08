#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int arr[2][2];


        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }

        int c=0;
        for(int i=0;i<2;i++)
        {
            int flag=0;
            for(int j=0;j<2;j++)
            {
                if(arr[i][j]==1)
                {
                    c++;
                }
            }
        }
        if(c==0)
        {
            cout<<0<<endl;
        }
        else if(c==4)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }


    }

}