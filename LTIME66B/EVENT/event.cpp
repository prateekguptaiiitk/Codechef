#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t,i,l,r;
	string s,e;

	cin>>t;
	
	while(t--)
	{
		cin>>s>>e>>l>>r;

		ll ss=0;
		ll ee =0;
		
		string days[] = {"saturday", "sunday", "monday", "tuesday", "wednesday", "thursday", "friday"};

		for(i=0;i<7;i++)
	    {
	        if(s==days[i])
	          ss=i+1;
	        if(e==days[i])
	          ee=i+1;
	    }

	    ll length;
	    length=(ee-ss+8)%7;

	    for(i=l;i<=r;i++)
	      if(i%7==length)
	        break;

	    if(i>r)
	      cout<<"impossible"<<endl;
	    else if(i+7<=r)
	      cout<<"many"<<endl;
	    else
	      cout<<i<<endl;
	}

	return 0;
}
