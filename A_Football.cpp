#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int max_count = 1, current_count = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            current_count++;
        } else {
            current_count = 1;
        }
        max_count = max(max_count, current_count);
    }

    if (max_count >= 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}