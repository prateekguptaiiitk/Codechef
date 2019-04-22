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
// sum = accumulate(a, a+n, 0);
// where 0 is the initial value of sum variable

// s.erase(1) - erase all characters except last
// s.erase(1,4) - erase 4 characters from index number 1

// cin.ignore(); - compulsory
// getline(cin, s); - inputs complete string s

//memset(a, 0, sizeof(a)); - initializes array 'a' with all values = 0

// set <int, greater<int> > s;
// s.insert(10); s.insert(20);
// s.size(); 
// set <int, greater<int> > :: iterator it;
// for(it=s.begin(); it!= s.end(); it++)
//    cout<<*it<<endl;

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

    while(t--)
    {
      string s;
      cin>>s;

      int l=s.length();
      if(l==1)
        cout<<"NO"<<endl;
      else if(l==2)
        {
            if(s[0]==s[1])
            {
                cout<<"NO"<<endl;
                
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
      else
      {
           if(s[0]==s[1])
            {
                cout<<"NO"<<endl;
               continue;   
            }
          int y=0;
          for(int i=2;i<l;i++)
          {
              if(s[i]!=s[i-2])
              {
                  y=1;
                  cout<<"NO"<<endl;
                  break;

              }

          }

          if(y==0)
            cout<<"YES"<<endl;
      }
    }

    return 0;
}
