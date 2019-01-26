#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll n,m,i;
	cin>>n>>m;

	ll a[n];
	ll b[m];

	for(i=0;i<n;i++)
		cin>>a[i];

	for(i=0;i<m;i++)
		cin>>b[i];

	ll maxa=a[0];
  ll pmax=0;
  for(i=1;i<n;i++)
  {
     if(a[i]>maxa)
     {
         maxa=a[i];
         pmax=i;
     }
  }
  ll minb=b[0];
  ll pmin=0;
  for(i=1;i<m;i++)
  {
     if(b[i]<minb)
     {
         minb=b[i];
         pmin=i;
     }
  }
  for(i=0;i<n;i++)
  {
      cout<<i<<" "<<pmin<<endl;
  }
  for(i=0;i<m;i++)
  {
      if(i!=pmin)
      cout<<pmax<<" "<<i<<endl;
  }

	return 0;
}
