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

	ll t, n, i, j;
	cin>>t;

	while(t--)
	{
		cin>>n;
		ll a[n][n];

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}

		ll max_sum = -1;

		for(ll i=0; i<n; i++)
		{
	        for(ll j=0; j<n; j++)
	        {
		        ll r, c;
		        r=i; 
		        c=j;
		        ll sum = a[i][j];
		        r++; 
		        c++;

		        if(max_sum<sum)
		            max_sum=sum;

		        while(r<n && c < n)
		        {
		            sum=sum+a[r][c];
		            if(max_sum<sum)
		                max_sum=sum;

		            r++; 
		            c++;
		        }
	        }
        }

		cout<<max_sum<<endl;
	}

    return 0;
}
