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

	ll t,n;

	cin>>t;

	while(t--)
	{
		cin>>n;

		if(n%10 == 0)
			cout<<0<<endl;
		else if(n%5 == 0)
			cout<<1<<endl;
		else
			cout<<-1<<endl;

	}

    return 0;
}
