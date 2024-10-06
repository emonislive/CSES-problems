#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<ll> v(1000001, 0);
    // given, 1000001 = (10^6 + 1) or 1e6 + 1 range
    // this is where we precalculated the divisors of each values within the range to bypass the time exceed limitation
    for (ll i = 1; i < 1000001; i++) {
        for (ll j = i; j < 1000001; j += i) {
            v[j]++;
        }
    }
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << v[n] << endl;
    }
    return 0;
}
