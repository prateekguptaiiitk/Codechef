#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ff first
#define ss second
#define sqr(a) ((a) * (a))
#define pb push_back
#define pf push_front
#define mp make_pair

// GCD - __gcd(n1, n2)

// Count no. of occurences - count(s.begin(), s.end(), 'e')

/* Permutations - sort(s.begin(), s.end())
				  do{
				  	cout<<s<<endl;
				  }while(next_permutation(s.begin(), s.end()));
*/
// Revese sort - sort(arr, arr+n, greater<ll>())

// Finding substring in another string - 
// size_t = str.find("geeks.practice", 0, 5); only search first 5 characters from geeks.pra ...
// str.find("geeks"); search geeks in str
// str.find("geeks", index+1); find geeks in original string after (index+1) index
// in str
// if size_t != string::npos

using namespace std;

int main()
{
	boost;

	ll t,i,n,u,d;

	cin>>t;

	while(t--)
	{
		cin>>n>>u>>d;

		ll a[n];
		ll c = 1;
		ll f = 1;
		for(i=0;i<n;i++)
			cin>>a[i];

		for(i=0;i<n-1;i++)
		{
			if(a[i+1] > a[i])
			{
				if((a[i+1]-a[i]) <= u)
					c++;
				else
					break;
			}
			else if(a[i+1] < a[i])
			{
				if((a[i]-a[i+1]) <= d)
					c++;
				else
				{
					if(f == 1)
					{
						c++;
						f = 0;
					}
					else
						break;
				}
			}
			else
				c++;
		}
		cout<<c<<endl;
	}	

    return 0;
}
