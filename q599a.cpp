#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,d3;

    cin>>d1>>d2>>d3;

    vector<int>v(4);
    v[0]=d1+d2+d3;
    v[1]=2*(d1+d2);
    v[2]=2*(d1+d3);
    v[3]=2*(d2+d3);
    int min=v[0];
    for(int i=0;i<4;i++)
    {
        if(v[i]<min)
        {
            min=v[i];
        }
    }

    cout<<min<<endl;
}