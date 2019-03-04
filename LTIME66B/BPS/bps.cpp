#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> arr(n);
        for (auto &num : arr)
        {
            cin >> num;
        }
        vector<pair<ll, ll>> ops;

        for (size_t i = 0; i < m; i++)
        {
            ll x, y;
            cin >> x >> y;
            ops.push_back(make_pair(x, y));
        }

        vector<ll> cpy = arr;

        for (size_t i = 0; i < ops.size(); i++)
        {
            ll x, y;
            x = ops[i].first;
            y = ops[i].second;
            x--;
            y--;
            reverse(arr.begin() + x, arr.begin() + y + 1);
        }

        ll num, denom;
        num = denom = 0;

        vector<ll> tmp(cpy);

        ll len = ops.size();
        sort(ops.begin(), ops.end());
        // all possible permuations
        do
        {
            for (size_t i = 0; i < len; i++)
            {
                ll x, y;
                x = ops[i].first;
                y = ops[i].second;
                x--;
                y--;
                reverse(tmp.begin() + x, tmp.begin() + y + 1);
            }

            if (equal(tmp.begin(), tmp.end(), arr.begin()))
            {
                num++;
            }

            denom++;

            tmp = cpy;

        } while (next_permutation(ops.begin(), ops.end()));

        ll lol = __gcd(num, denom);
        num /= lol;
        denom /= lol;
        cout << num << "/" << denom << "\n";
    }

    return 0;
}
