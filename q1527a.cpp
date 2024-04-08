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
        int sum=n;
        int i=0;
        while(sum)
        {
            i++;
            sum=sum&(n-i);
            
        }
        cout<<(n-i)<<endl;
    }
}