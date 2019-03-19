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

	ll t,i,d;
	cin>>t;

	while(t--)
	{
		string s;
		cin>>d>>s;

		ll arr[7] = {0};
		arr[0]=arr[1]=arr[2]=arr[3]=arr[4]=arr[5]=arr[6]=4;

		if(s=="mon") {
			for(i=0;i<d-28;i++){
				arr[i]++;
			}
		}
		else if(s=="tues")
		{
			for(i=0;i<d-28;i++){
				arr[i+1]++;
			}
			
		}
		else if(s=="wed"){
			
			for(i=0;i<d-28;i++){
				arr[i+2]++;
			}
			
		}
		else if(s=="thurs"){
			
			for(i=0;i<d-28;i++){
				arr[i+3]++;
			}
		}
		
		else if(s=="fri") {
			
			for(i=0;i<d-28;i++){
					if(i+4>=7){
						arr[i+4-7]++;
				}
				else 
					arr[i+4]++;
			}
		}
		else if(s=="sat") {
				
			for(i=0;i<d-28;i++){
				if(i+5>=7){
					arr[i+5-7]++;
				}
				else 
					arr[i+5]++;
			}
		}
		else if(s=="sun"){

			for(i=0;i<d-28;i++){
				if(i+6>=7){
					arr[i+6-7]++;
				}
				else
					arr[i+6]++;
			}
		}

		for(i=0;i<7;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}

    return 0;
}
