#include <bits/stdc++.h>
#define ll long long

#define sz(x) ((int)x.size())
#define rep(i, n) for(int i = 0; i < (n); i++)
#define res(i, s) for(int i = 0; i < (sz(s)); i++)
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define vi vector <int> 
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f 

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t,n,i;

	cin>>t;

	while(t--)
	{
		cin>>n;

		ll a[n];
		ll sum = 0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum += a[i];
		}

		ll yb, mb, db;

		cin>>yb>>mb>>db;

		ll yc, mc, dc;

		cin>>yc>>mc>>dc;

		ll nm = yc - yb;

		ll s = 0;
		if(nm == 0)
		{
			if(mc != mb)
			{
				for(i=mb;i<mc-1;i++)
				{
					s += a[i];
				}
				s += (a[mb-1]-db+1);
				s += dc;
			}
			else
			{
				s = dc - db + 1;
			}
		}
		else
		{
			for(i=mb;i<n;i++)
			{
				s += a[i];
			}
			for(i=0;i<mc-1;i++)
			{
				s += a[i];
			}
			s += (a[mb-1]-db+1);
			s += dc;
			s = s + sum*(nm-1);
			
			if(yb%4 == 0)
				s++;
			for(i=yb+1;i<yc;i++)
			{
				if(i%4 == 0)
					s++;
			}
		}
		cout<<s<<endl;
	}

	return 0;
}
