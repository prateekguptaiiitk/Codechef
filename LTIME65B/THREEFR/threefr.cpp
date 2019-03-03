#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t,a,b,c;

	cin>>t;

	while(t--)
	{
		cin>>a>>b>>c;

		if((a+b) == c)
			cout<<"yes"<<endl;
		else if((a+c) == b)
			cout<<"yes"<<endl;
		else if((b+c) == a)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}


	return 0;
}
