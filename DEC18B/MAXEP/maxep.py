#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
  int n,c,y,i,j,step;
  cin>>n>>c;
  if(n<=1000)
  {
    for(i=1;i<=1000;i++)
    {
      cout<<1<<" "<<i<<endl;
      cin>>y; 
      if(y==1)
      {
        cout<<3<<" "<<i<<endl;
        break;
      }
    }
  }
  else
  {
    step=1000;
    for(i=1;i<=n;i=i+step)
    {
      cout<<1<<" "<<i<<endl;
      step--;
      cin>>y;
      if(y==1)
      {
        if(i==1)
          break;
        else
        {
        step=step-c;
        cout<<2<<endl;
        break;
        }
      }
    }
    if(i==1)
    cout<<3<<" "<<1<<endl;
    else
    {
      for(j=i-step-c;j<n;j=j+2)
      {
        cout<<1<<" "<<j<<endl;
        cin>>y; 
        if(y==1)
        {
          cout<<2<<endl;
          break;
        }
      }
      j--;
      cout<<1<<" "<<j<<endl;
      cin>>y;
      if(y==1)
        cout<<3<<" "<<j<<endl;
      else
        cout<<3<<" "<<j+1<<endl;
    }
  }
}
