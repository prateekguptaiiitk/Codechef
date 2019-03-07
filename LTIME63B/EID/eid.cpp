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

int main()
{
	boost;

	ll t,i,n;

	cin>>t;

	while(t--)
	{
		cin>>n;
		ll a[n];

		for(i=0;i<n;i++)
			cin>>a[i];

		sort(a, a+n);

		ll diff[n-1];

		for(i=0;i<n-1;i++)
			diff[i] = a[i+1]-a[i];

		ll min = 1000001;

		for(i=0;i<n-1;i++)
		{
			if(diff[i] < min)
				min = diff[i];
		}

		cout<<min<<endl;
	}

    return 0;
}
