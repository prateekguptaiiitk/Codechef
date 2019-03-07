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

	ll t,i,n,m;

	cin>>t;

	while(t--)
	{
		cin>>n>>m;
		string a[n],b[n];
		ll wr = 0;
		ll in = 0;

		for(i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
		}

		for(i=0;i<n;i++)
		{
			if(a[i].compare("correct") == 0)
			{
				if(count(b[i].begin(), b[i].end(), '1') != m)
				{
					in = 1;
					break;
				}
			}
		}

		if(in == 0)
		{
			for(i=0;i<n;i++)
			{
				if(a[i].compare("wrong") == 0)
				{
					if(count(b[i].begin(), b[i].end(), '0') == 0)
					{
						wr = 1;
						break;
					}
				}
			}
			if(wr == 0)
				cout<<"FINE"<<endl;
			else
				cout<<"WEAK"<<endl;
		}
		else
			cout<<"INVALID"<<endl;


	}

    return 0;
}
