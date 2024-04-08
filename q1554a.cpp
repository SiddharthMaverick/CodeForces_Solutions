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

    vector<long long int>v;


    for(int i=0;i<n;i++)
    {
      int p;
      cin>>p;
      v.push_back(p);
    }
    long long int max=v[0]*v[1];
    for(int j=0;j<n-1;j++)
    {
        if(v[j]*v[j+1]>max)
        {
          max=v[j]*v[j+1];
        }
    }
    cout<<max<<endl;

  }
}