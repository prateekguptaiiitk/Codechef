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

    ll t,i;

    cin>>t;

    while(t--)
    {
        string s;
        ll summ=0;
        cin >> s;
        string maxi="";
        maxi += (char)(1);
        bool chla=false;
        for (i = 0; i < s.length(); ++i)
        {
            summ += ((ll)s[i] - '0'); 
        }
        string t;
        if(((ll)(s[s.length()-1]) - 48)%2 == 0){
            for (i = 0; i < s.length()-1; ++i)
            {
                t = s;
                ll num=summ - ((ll)(s[i]) - 48);
                if(num%3 == 0){
                    t.erase(i,1);
                    if(t > maxi){
                        chla =true;
                        maxi=t;
                    }   
                }
            }
            ll num=summ - ((ll)(s[s.length()-1]) - 48);
            ll prev =((ll)(s[s.length()-2]) - 48);
            if(num % 3 == 0 && prev%2 == 0){
                s.erase(s.length()-1,1);
                if(s > maxi){
                    maxi = s;
                    chla = true;    
                } 
            }
        }
        else{
            ll num=summ - ((ll)(s[s.length()-1]) - 48);
            ll prev = (ll)(s[s.length()-2]) - 48;
            if(num % 3 == 0 && prev % 2 == 0){
                chla = true;
                s.erase(s.length()-1,1);
                maxi = s;
            }
        }
        if(chla) cout << maxi << endl;
        else cout << -1 << endl;
    }

    return 0;
}
