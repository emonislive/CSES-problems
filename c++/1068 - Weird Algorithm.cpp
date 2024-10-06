#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll a;
    cin >> a;
    cout << a << " ";
    while (a != 1)
    {
        if (a % 2 != 0)
        {
            a *= 3ll;
            a += 1ll;
            cout << a << " ";
        }
        if (a % 2 == 0)
        {
            a /= 2ll;
            cout << a << " ";
        }
    }
    return 0;
}
