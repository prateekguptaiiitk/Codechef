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


using namespace std;

int main()
{
	boost;

	int t;
    cin>>t;
    while(t--)
    {
        int i,j=0,k,x,l,m=0,n,f=0;
        cin>>n>>l;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        while(1){
        k=a[0];
        for(i=0;i<n;i++)
        {
            x=a[i];
            k=__gcd(k,x);
            //cout<<k;
        }
        if(k==1)
        {
            f=1;
            break;
        }
        if(k>l)
        {
            j=__gcd(k,l);
            //cout<<j;
            if(j==1)
            {
                f=0;
                break;
            }
            else
            {
                for(int u=0;u<n;u++)
                {
                    a[u]=a[u]/j;
                }
            }
        }
        else
        {
            f=1;
            break;
        }
        }
        if(f==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
