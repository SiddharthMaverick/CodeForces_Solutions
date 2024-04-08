#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    cin>>n>>x;
    long long int sum=x;
    int d=0;
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        long long int s;
        cin>>s;
        if(ch=='+')
        {
            sum=sum+s;
        }
        else
        {
            if(s<=sum)
            {
                sum=sum-s;
            }
            else{
                d++;
            }
        }
    }
    cout<<sum<<" "<<d;
}