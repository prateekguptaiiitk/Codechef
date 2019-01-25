#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t,n,i,a,b;
	cin>>t;

	while(t--)
	{
		cin>>n>>a>>b;
		ll arr[n];

		ll c1=0;
		ll c2=0;
		ll c3=0;

		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]%a == 0 && arr[i]%b!=0)
				c1++;
			else if(arr[i]%a!=0 && arr[i]%b==0)
				c2++;
			else if(arr[i]%a==0 && arr[i]%b==0)
				c3++;
		}

		if(c3 != 0)
		{	
			c1++;
			if(c1 > c2)
				cout<<"BOB"<<endl;
			else
				cout<<"ALICE"<<endl;
		}
		else
		{
			if(c1 > c2)
				cout<<"BOB"<<endl;
			else
				cout<<"ALICE"<<endl;
		}
	}
	return 0;
}
