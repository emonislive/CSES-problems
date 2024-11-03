#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll size)
{
    vector<ll> array(size);
    for (ll i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    sort(array.begin(), array.end());
    array.erase(unique(array.begin(), array.end()), array.end());

    ll resize = array.size();
    cout << resize << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    ll size;
    cin >> size;
    solve(size);

    return 0;
}
