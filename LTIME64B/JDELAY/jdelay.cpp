#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    ll t,n,i;
    cin>>t;
    while(t--) {
        cin>>n;
        ll a[n][2];
        ll c = 0;
        for(i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1];
            if(a[i][1] - a[i][0] > 5)
            {
                c++;
            }
        }

        cout<<c<<endl;

    }

    return 0;
}
