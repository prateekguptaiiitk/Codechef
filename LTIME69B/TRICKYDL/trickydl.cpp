#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t,a;

	cin>>t;

	while(t--)
	{
		cin>>a;
		ll max = 0;
		ll d = 0;
		ll n = 1;
		ll d2 = 0;
		ll amt = 1;
		do
		{
			d = a*n - amt;
			//cout<<d<<endl;
			if(d > max)
			{
				max = d;
				d2 = n;
			}
			n++;
			amt += pow(2, n-1);
			//cout<<d<<" "<<n<<endl;
		}while(d > 0);
		cout<<(n-2)<<" "<<d2<<endl;
	}

	return 0;
}
