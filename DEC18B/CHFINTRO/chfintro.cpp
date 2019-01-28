#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll n,r,i,R;

  cin>>n>>r;

  while(n--)
  {
    cin>>R;
    if(R >= r)
      cout<<"Good boi"<<endl;
    else
      cout<<"Bad boi"<<endl;
  }
  return 0;
}
