#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;

    char arr[r][c];

    

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<r;i++)
    {
        int flag=1;
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]=='S')
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            for(int j=0;j<c;j++)
            {
                arr[i][j]='E';
            }
        }
    }
    
    for(int i=0;i<c;i++)
    {
        int flag=1;
        for(int j=0;j<r;j++)
        {
            if(arr[j][i]=='S')
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            for(int j=0;j<r;j++)
            {
                arr[j][i]='E';
            }
        }
    }



    int count=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            
            if(arr[i][j]=='E')
            {
                count++;
            }
            
        }
        
    }

    cout<<count<<endl;



}