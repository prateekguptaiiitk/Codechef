#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 1e3 + 10;

int n, a[MAXN][MAXN];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int te;	cin >> te;
	while (te--){
		cin >> n;
		int cur = 1;
		for (int sm = 0; sm <= (n-1)+(n-1); sm++)
			for (int row = 0; row < n; row++){
				int col = sm - row;
				if (0 <= col && col < n)
					a[row][col] = cur++;
			}

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}
