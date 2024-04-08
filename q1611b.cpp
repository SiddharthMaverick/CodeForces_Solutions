#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int a,b;
        cin>>a>>b;

        int count=0;
        if(a<b)
        {
            int y=b/3;
            int z=b%3;
            if(y>a)
            {
                count=a;
            }
            else
            {
                int ko=a-y;
                int gi=(ko+z)/4;
                count=y+gi;
            }
        }
        else if(b<a)
        {
            int y=a/3;
            int z=a%3;
            if(y>b)
            {
                count=b;
            }
            else
            {
                int ko=b-y;
                int gi=(ko+z)/4;
                count=y+gi;
            }
        }
        else
        {
            count=(b+a)/4;
        }

        cout<<count<<endl;
    }
}
