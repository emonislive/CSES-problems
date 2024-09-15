#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector <ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll ans = 0;
    for (int i = 1; i < n; i++) {
        if ((v[i] < v[i - 1])) {
            ans += v[i - 1] - v[i];
            // cout << v[i - 1] - v[i] << " (" << v[i - 1] << "-" << v[i] << ")  --> ";   // for debugging part 1
            v[i] = v[i - 1];
            // cout << v[i] << endl;                                                      // for debugging part 2
        }
        else
            continue;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
