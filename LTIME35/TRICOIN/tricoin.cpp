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

// "If you can't do something, get it done by someone else ;-) "
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

// Sum of a number in string format eg. "124" 
// int sum = (accumulate(begin(s), end(s), 0) - '0' * n);

// int sum = 0;
// accumulate(a, a+n, sum);
// where sum is the initial value of sum variable

// s.erase(1) - erase all characters except last
// s.erase(1,4) - erase 4 characters from index number 1

// cin.ignore(); - compulsory
// getline(cin, s); - inputs complete string s

//memset(a, 0, sizeof(a)); - initializes array 'a' with all values = 0

using namespace std;
long f[100001];

ll bs(ll x)
{
    ll l=1,r=44721,mid;
    while (l<=r)
    {
        mid = (l+r)/2;

        if ((x>=f[mid]) && (x<f[mid+1])) 
            return mid;
        else if (f[mid+1]==x) 
            return mid+1;
        else if (f[mid]>x) 
            r = mid - 1;
        else 
            l = mid +1;
    }
}

int main()
{
	boost;

	// #ifndef ONLINE_JUDGE
 //            freopen("input.txt", "rt", stdin);
 //            freopen("output.txt", "wt", stdout);
 //    #endif

    ll t,n,i;

    cin>>t;

    for (i=1; i<=44721; i++) 
        f[i] = i*(i+1)/2;
    while(t--)
    {
        cin>>n;

        cout<<bs(n)<<endl;
    }

    return 0;
}
