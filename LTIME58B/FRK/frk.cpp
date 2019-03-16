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

	ll n,c = 0;

	cin>>n;

	while(n--)
	{
		string s;
		cin>>s;

		size_t f1 = s.find("ch");
		size_t f2 = s.find("he");
		size_t f3 = s.find("ef");

		if(f1 != string::npos || f2 != string::npos || f3 != string::npos)
			c++;
	}
	cout<<c<<endl;

    return 0;
}
