#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>rt;
    for(int ji=1;ji<=t;ji++)
    {
        char arr[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>arr[i][j];
            }
        }
        int ci,cj;
        int c2=0;
        
        for(int i=0;i<=7;i++)
        {
            int c=0;
            int k;
            for(int j=0;j<=7;j++)
            {
                if(arr[i][j]=='#')
                {
                    c++;
                    k=j;
                }
            }
            if((c==1)&&(c2==2))
            {
                ci=i+1;
                cj=k+1;
                break;
            }
            c2=c;
        }
        rt.push_back(ci);
        rt.push_back(cj);
    }
    for(int i=0;i<rt.size();i=i+2)
    {
        cout<<rt[i]<<" "<<rt[i+1]<<endl;
    }
}