#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,i,a,b,c,d,e;
    cin>>t;
    for(i=1;i<=t;i++) {
        cin >> a >> b;

        ll sum = 0;
        ll pow = 1;
        while (a != 0 || b != 0) {
            c = a % 10;
            d = b % 10;
            e = c + d;
            sum = sum + e % 10 * pow;
            pow *= 10;
            a /= 10;
            b /= 10;
        }
        cout << sum<<"\n";
    }
    return 0;
}
