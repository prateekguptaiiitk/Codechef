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

using namespace std;

int main()
{
	boost;

	// #ifndef ONLINE_JUDGE
 //            freopen("input.txt", "rt", stdin);
 //            freopen("output.txt", "wt", stdout);
 //  #endif

    ll t,i;

    cin>>t;
    string s;

    while(t--)
    {
        
        cin>>s;

        ll f = 0;
        ll c = 0;
        
        for(i=0;i<s.length();i++)
        {
          if(s.at(i) == '1')
            c++;
        }

        for(i=0;i<s.length();i++)
        {
          if(s.at(i) == '1')
            f++;
          else
          {
            if(f >= 1)
              break;
          }
        }

        if(f == c && c != 0)
          cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
        
    }

    return 0;
}
