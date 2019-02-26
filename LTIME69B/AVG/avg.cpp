#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t,n,k,v,i;

	cin>>t;

	while(t--)
	{
		cin>>n>>k>>v;
		ll a[n];
		ll s = 0;

		for(i=0;i<n;i++)
		{
			cin>>a[i];
			s += a[i];
		}

		ll d = (v*(n+k) - s) / k;

		if(d*k == (v*(n+k) - s) && d > 0)
			cout<<d<<endl;
		else
			cout<<"-1"<<endl;
	}

	return 0;
}
