#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  
  vector<int>v;
  
  for(int i=0;i<n;i++)
  {
    int p;
    cin>>p;
    v.push_back(p);
  }  

  int c1=0,c2=0,c3=0,c4=0;

  for(int i=0;i<n;i++)
  {
    if(v[i]==1)
    {
      c1++;
    }
    if(v[i]==2)
    {
      c2++;
    }
    if(v[i]==3)
    {
      c3++;
    }
    if(v[i]==4)
    {
      c4++;
    }
  }


  int g;
  if(c3+(2*(c2%2))>=c1)
  {
    g=c3+((c2%2));
    
  }
  else
  {
    g=((c1-(c3+(2*(c2%2))))/4)+c3+((c2%2));

    if((c1-(c3+(2*(c2%2))))%4>0)
    {
        
        g=g+1;
    }
  }
  int d=c2/2;
  
  cout<<c4+g+d<<endl;




}