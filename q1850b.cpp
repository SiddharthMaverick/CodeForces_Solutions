#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int c=1;
    int minq=0;
    int minp=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        
        if(a>10)
        {

        }
        else
        {
            if(b>minq)
            {
                minq=b;
                minp=c;
            }
        }
        c++;
    }
    cout<<minp<<endl;;
    }
}