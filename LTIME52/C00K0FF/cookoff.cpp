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

using namespace std;

int main()
{
	boost;

	// #ifndef ONLINE_JUDGE
 //            freopen("input.txt", "rt", stdin);
 //            freopen("output.txt", "wt", stdout);
 //    #endif

    ll t,i,n;

    cin>>t;

    while(t--)
    {
       cin>>n;
       bool t1 = false;
       bool t2 = false;
       bool t3 = false;
       bool t4 = false;
       bool t5 = false;
       string s[n];

       for(i=0;i<n;i++)
       		cin>>s[i];

       	for(i=0;i<n;i++)
       	{
       		if(s[i].compare("cakewalk") == 0)
       			t1 = true;
       		else if(s[i].compare("simple") == 0)
       			t2 = true;
       		else if(s[i].compare("easy") == 0)
       			t3 = true;
       		else if(s[i].compare("easy-medium")==0 || s[i].compare("medium")==0)
       			t4 = true;
       		else if(s[i].compare("medium-hard")==0 || s[i].compare("hard")==0)
       			t5 = true;
       	}

       	if(t1 == true && t2 == true && t3 == true && t4 == true && t5 == true)
       		cout<<"Yes"<<endl;
       	else
       		cout<<"No"<<endl;
    }

    return 0;
}
