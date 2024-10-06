#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(string s)
{
    ll c = 1, max = 0, len = s.length();

    if (len == 1) {
        cout << 1 << endl;
        return;
    }

    for (ll i = 0; i < len - 1; i++) {
        char ch = s[i];
        
        if (ch == s[i + 1])
            c++;
        else {
            if (c > max)
                max = c;
            
            c = 1;
        }
        if (c > max)
            max = c;
    }
    cout << max << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    string s;
    cin >> s;
    solve(s);
  
    return 0;
}
