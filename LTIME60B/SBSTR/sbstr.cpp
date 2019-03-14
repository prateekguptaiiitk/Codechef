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

	ll t,i,k,j;

	cin>>t;

	while(t--)
	{
		string s;
		cin>>s;
		cin>>k;
		ll count = 0;
		for(i=0;i<s.length();i++)
		{
			ll arr[26]={0};
	        ll arr2[26]={0};
	        ll c=0,maxi=0;
	        for(j=i;j<s.length();j++)
	        {
	            arr[int(s[j])-97]++;
	            if (arr2[int(s[j])-97]==0){
	                    arr2[int(s[j])-97]=1;
	                    c++;
	            }
	            maxi=max(maxi,arr[int(s[j])-97]);

	            ll m,x=0;
	            for (m=0;m<26;m++)
	            {
	                    if ( arr[m]!=0 && arr[m]!=maxi ) 
	                      x=1;
	            }
	            if (x==1) continue;
	            if (c>=k)
	                count++;
	        }
		}
		cout<<count<<endl;
	}

    return 0;
}
