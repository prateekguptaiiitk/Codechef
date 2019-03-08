#include <bits/stdc++.h>
#define ll long long
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ff first
#define ss second
#define sqr(a) ((a) * (a))
#define pb push_back
#define pf push_front
#define mp make_pair

using namespace std;

int main()
{
	boost;

	ll t, a,b,c,x,y;

	cin>>t;

	while(t--)
	{
		cin>>a>>b>>c>>x>>y;

		if(x>=a && y>=b && ((x-a)+(y-b) == c))
			cout<<"YES"<<endl;
		else if(x>=b && y>=a && ((x-b)+(y-a) == c))
			cout<<"YES"<<endl;
		else if(x>=b && y>=c && ((x-b)+(y-c) == a))
			cout<<"YES"<<endl;
		else if(x>=c && y>=b && ((x-c)+(y-b) == a))
			cout<<"YES"<<endl;
		else if(x>=a && y>=c && ((x-a)+(y-c) == b))
			cout<<"YES"<<endl;
		else if(x>=c && y>=a && ((x-c)+(y-a) == b))
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}

    return 0;
}
