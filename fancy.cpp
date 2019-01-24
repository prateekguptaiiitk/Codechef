#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t,i;
	cin>>t;
	cin.ignore();

	string s;
	while(t--){
		getline(cin, s);

		ll f =0;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='n'&&s[i+1]=='o'&&s[i+2]=='t')
	        {
	            if(i==0||s[i-1]==' ')
	            {
	                if(i==s.length()-3||s[i+3]==' ')
	                {
	                    f=1;
	                    break;
	                }
	            }
	        }
		}
		if(f==1)
			cout<<"Real Fancy"<<endl;
		else
			cout<<"regularly fancy"<<endl;
	}

	return 0;
}
