#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int chest=0,back=0,biceps=0;

    for(int i=0;i<n;i++)
    {
        if((i+1)%3==0)
        {
            back+=v[i];
        }
        else if((i+1)%3==1)
        {
            chest+=v[i];
        }
        else if((i+1)%3==2)
        {
            biceps=biceps+v[i];
        }
    }

    if(biceps>chest && biceps>back)
    {
        cout<<"biceps"<<endl;
    }
    if(chest>biceps && chest>back)
    {
        cout<<"chest"<<endl;
    }
    if(back>chest && back>biceps)
    {
        cout<<"back"<<endl;
    }
    


}