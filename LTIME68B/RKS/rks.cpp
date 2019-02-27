#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t,i,n,k;

	cin>>t;

	while(t--)
	{
		cin>>n>>k;
		ll r[n];
		ll c[n];
		ll x,y;

		memset(r, 0, sizeof(r));
		memset(c, 0, sizeof(c));

		for(i=0;i<k;i++)
		{
			cin>>x>>y;
			r[x-1] = 1;
			c[y-1] = 1;
		}

		cout<<n-k<<" ";

		vector<ll> rv;
		vector<ll> cv;

		for(i=0;i<n;i++)
		{
			if(r[i] == 0)
			{
				rv.push_back(i+1);
			}
			if(c[i] == 0)
			{
				cv.push_back(i+1);
			}
		}
		for(i=0;i<rv.size();i++)
			cout<<rv[i]<<" "<<cv[i]<<" ";

		cout<<endl;
	}

	return 0;
}
