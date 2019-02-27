#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t,i,n;

	cin>>t;

	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;

		ll c = 0;
		for(i=0;i<s.length();i++)
		{
			if(i == 0 && s.length() > 1)
			{
				if(s.at(i) == '0' && s.at(i+1) == '0')
				{
					s[i] = '1';
					c++;
				}
			}
			else if(i == s.length()-1 && s.length() > 1)
			{
				if(s.at(i) == '0' && s.at(i-1) == '0')
				{
					s[i] = '1';
					c++;
				}
			}
			else if(s.length() == 1)
			{
				if(s.at(i) == '0')
				{
					s[i] = '1';
					c++;
				}
			}
			else if(s.at(i) == '0' && s.at(i-1) == '0' && s.at(i+1) == '0')
			{
				s[i] = '1';
				c++;
			}
		}
		cout<<c<<endl;
	}

	return 0;
}
