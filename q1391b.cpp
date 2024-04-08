#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int n,m;
        cin>>n>>m;

        char ch[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ch[i][j];
            }
        }

        int c=0;
        for(int i=0;i<n;i++)
        {
            if(ch[i][m-1]=='R')
            {
                c++;
            }
        }

        int d=0;

        for(int i=0;i<m;i++)
        {
            if(ch[n-1][i]=='D')
            {
                d++;
            }
        }
        cout<<c+d<<endl;

    }
}