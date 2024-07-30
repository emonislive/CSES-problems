#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v1, v2;
    int range, input, i, miss;
    cin >> range;
    
    // this vector stores all the number including missing number
    for(i = 1; i <= range; i++){        
        v1.push_back(i);
    }
    
    for (i = 0; i < range - 1; i++)    
    {
        // user input
        cin >> input;
        v2.push_back(input);
    }
    // sorting the v2 vector that stored the user input values to compare with the v1 vector to find the missing value
    sort(v2.begin(), v2.end());

    // if any of the value doesn't match with each other then value v1[x] position value is the missing
    for (i = 0; i < range; i++){        
        if (v1[i] != v2[i]){
            miss = v1[i];
            break;
        } 
    }
    cout << miss << endl;

    return 0;
}
