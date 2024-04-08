#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        long long int n;
        cin>>n;

        if(n>1)
        {
            cout<<int(pow(2,n)-1)<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}