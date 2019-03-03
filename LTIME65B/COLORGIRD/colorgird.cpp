#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t,n,m,i,j;

	cin>>t;

	while(t--)
	{
		cin>>n>>m;

		char a[n][m];
		bool color[n][m];

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>a[i][j];
				color[i][j] = false;
			}
		}

		for(i=0;i<n-1;i++)
		{
			for(j=0;j<m-1;j++)
			{
				if(a[i][j] == '.' && a[i+1][j] == '.' && a[i][j+1] == '.' && a[i+1][j+1] == '.')
				{
					color[i][j] = true;
					color[i+1][j] = true;
					color[i][j+1] = true;
					color[i+1][j+1] = true;
				}
			}
		}

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i][j] == '#')
					color[i][j] = true;
			}
		}

		ll f = 0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(color[i][j] == false)
				{
					cout<<"NO"<<endl;
					f = 1;
					break;
				}
			}
			if(f == 1)
				break;
		}

		if(f == 0)
			cout<<"YES"<<endl;
	}


	return 0;
}
