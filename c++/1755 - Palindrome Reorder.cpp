#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    string s;
    cin >> s;

    int len = s.size();
    map<char, int> freq; // Use map to maintain lexicographical order
    for (char c : s)
        freq[c]++;

    int oddCount = 0;
    char oddChar = 0;

    for (auto &it : freq)
    {
        if (it.second % 2 != 0)
        {
            oddCount++;
            oddChar = it.first; // Store the character with odd count
        }
    }

    if (oddCount > 1) // More than 1 odd-count character means no palindrome possible
    {
        cout << "NO SOLUTION" << endl;
        return;
    }

    string firstHalf = "", secondHalf = "", middle = "";

    for (auto &it : freq)
    {
        string temp(it.second / 2, it.first);
        firstHalf += temp;
    }

    if (oddCount == 1)
        middle = oddChar; // The middle character for odd-length palindromes

    secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());

    cout << firstHalf + middle + secondHalf << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
