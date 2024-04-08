#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int sum=0;
        char arr [10][10];
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                char ch;
                cin>>ch;
                arr[i][j]=ch;
            }
        }
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(arr[i][j]=='X')
                {
                    if(((i>=4)&&(i<=5))&&((j>=4)&&(j<=5)))
                    {
                        sum++;
                    }
                    if(((i>=3)&&(i<=6))&&((j>=3)&&(j<=6)))
                    {
                        sum++;
                    }
                    if(((i>=2)&&(i<=7))&&((j>=2)&&(j<=7)))
                    {
                        sum++;
                    }
                    if(((i>=1)&&(i<=8))&&((j>=1)&&(j<=8)))
                    {
                        sum++;
                    }
                    if(((i>=0)&&(i<=9))&&((j>=0)&&(j<=9)))
                    {
                        sum++;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
}