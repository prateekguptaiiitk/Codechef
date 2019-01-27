#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin>>t;
  while(t--)
  {
      ll n,p,ans=0;
      cin>>n>>p;
      if(n==1 || n==2)
      {
          ans=p*p*p;
          cout<<ans<<endl;
      }
      else
      {
      ll m=(n-1)/2;
      
      ans=(((p-m)*(p-m))+((p-m)*(p-n))+((p-n)*(p-n)));
      cout<<ans<<endl;
      }
      
  }

	return 0;
}
