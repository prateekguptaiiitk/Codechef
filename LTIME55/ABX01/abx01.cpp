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

ll modular(ll x, unsigned long long int y)
{
    ll res = 1;
    x = x % 9;
    while (y)
    {
        if (y & 1)
        {
            res = (res * x) % 9;
            if(res==0)
            res = 9;
        }
        y = y >> 1;
        x = (x * x) % 9;
    }
    return res;
}

int main()
{
	boost;

	// #ifndef ONLINE_JUDGE
 //            freopen("input.txt", "rt", stdin);
 //            freopen("output.txt", "wt", stdout);
 //    #endif

	ll t, a, n;
    cin >> t;

    while (t--)
    {
        cin >> a >> n;
        cout << modular(a, n) << endl;
    }

    return 0;
}
