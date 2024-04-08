#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,k;

    cin>>n>>m>>k;

    vector<int>x(m+1);

    for(int i=0;i<m+1;i++)
    {
        cin>>x[i];
    }
    int count=0;
    for(int i=0;i<m;i++)
    {
        int p=x[i];
        int c=p^x[m];
        
        string st="";
        while(c>1)
        {
            if(c%2==1)
            {
                st="1"+st;
                c=c/2;
            }
            else
            {
                st="0"+st;
                c=c/2;
            }
        }

        int b=0;
        for(int j=0;j<st.length();j++)
        {
            if(st[j]=='1')
            {
                b++;
            }
        }
        if(b<k)
        {
            count++;
        }
    }
    cout<<count<<endl;


}