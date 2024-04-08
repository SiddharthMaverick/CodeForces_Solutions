#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int dif=abs(b-a);
        if(2*dif>=c && 2*dif>=a && 2*dif>=b)
        {
            if(c>=dif+1)
            {
                cout<<c-dif<<endl;
            }
            else
            {
                cout<<c+dif<<endl;
            }
        }
        else
        {
            cout<<-1<<endl;
        }

    }
}