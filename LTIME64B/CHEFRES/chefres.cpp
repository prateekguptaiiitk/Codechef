#include <bits/stdc++.h>
#define ll long long
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ff first
#define ss second
#define sqr(a) ((a) * (a))
#define pb push_back
#define pf push_front
#define mp make_pair

using namespace std;

bool comp(pair<ll,ll> a,pair<ll,ll> b)
{
	return (a.ff<b.ff);
}

int main()
{
	boost;

	ll t,n,m,i,l,r;

	cin>>t;

	while(t--)
	{
		cin >> n >> m;
		ll maxr = -1;
		vector<pair<ll,ll> > a(n);
		unordered_set<ll> lr;
		for(i=0;i<n;i++)
		{
			cin >> l >> r;
			a[i] = mp(l,r);
			if(r>maxr)
				maxr = r;
			lr.insert(l);
		}
		sort(a.begin(),a.end(),comp);

		ll p;
		for(i=0;i<m;i++)
		{
			cin >> p;
			if(p>=maxr)
				{cout << "-1\n";}
			else
			{
				if(lr.count(p))
					cout << "0\n";
				else
				{
					ll low = 0,high = n-1,mid;
					while(low<=high)
					{
						mid = low + (high-low)/2;
						if(a[mid].ff > p)
						{
							if(mid>=1)
							{
								if(a[mid-1].ss <= p)
								{
									cout << a[mid].ff - p << "\n";
									break;
								}
								else
								{
									high = mid - 1;
								}
							}
							else
							{
								cout << a[mid].ff - p << "\n";
								break;
							}
						}
						else
						{
							if(a[mid].ss > p)
								{cout << "0\n";break;}
							else
							{
								low = mid+1;
							}
						}
					}
				}
			}
		}
	}

    return 0;
}
