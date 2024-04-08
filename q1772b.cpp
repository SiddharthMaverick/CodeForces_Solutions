#include<bits/stdc++.h>
using namespace std;
bool check(int arr[2][2])
{
    int flag=1;
    if(arr[0][0]>arr[0][1])
    {
        flag=0;
    }
    if(arr[1][0]>arr[1][1])
    {
        flag=0;
    }
    if(arr[0][0]>arr[1][0])
    {
        flag=0;
    }
    if(arr[0][1]>arr[1][1])
    {
        flag=0;
    }

    if(flag==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
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
                int p;
                cin>>p;
                arr[i][j]=p;
            }
        }

        int re[2][2];

        int flag=0;

        for(int i=0;i<4;i++)
        {
            if(check(arr))
            {
                flag=1;
                break;
            }
            re[0][0]=arr[1][0];
            re[1][0]=arr[1][1];
            re[0][1]=arr[0][0];
            re[1][1]=arr[0][1];

            for(int j=0;j<2;j++)
            {
                for(int k=0;k<2;k++)
                {
                    arr[j][k]=re[j][k];
                }
            }

        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}