#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> v;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '#') {
            count++;
        } else {
            if (count > 0) {
                v.push_back(count);
                count = 0;
            }
        }
    }

    // Handle the case when the string ends with one or more blocks
    if (count > 0) {
        v.push_back(count);
    }

    if (v.empty() || *max_element(v.begin(), v.end()) < k) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}