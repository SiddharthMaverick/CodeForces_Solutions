#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int ang;
        cin>>ang;

        if(360%(180-ang)==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }



}