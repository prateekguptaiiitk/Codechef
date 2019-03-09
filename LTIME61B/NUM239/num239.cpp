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

	ll t, i, l,r;

	cin>>t;

	while(t--)
	{
		cin>>l>>r;
		ll c = 0;

		for(i=l;i<=r;i++)
		{
			if(i%10 == 2 || i%10 == 3 || i%10 == 9)
				c++;
		}	
		cout<<c<<endl;
	}

    return 0;
}
