#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int n;
        cin>>n;

        if(n%2==0)
        {
            cout<<2<<" "<<n<<endl;
        }
        else
        {
            cout<<2<<" "<<n-1<<endl;
        }
    }
}