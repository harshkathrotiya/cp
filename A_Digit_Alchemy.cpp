#include <iostream>
#include <string>
using namespace std;

#define hk ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    hk
    string s;
    int q;
    cin >> s >> q;  // Read the string and number of queries

    while (q--) {
        int l1, r1, l2, r2, r;
        cin >> l1 >> r1 >> l2 >> r2 >> r;  // Read query parameters

        // Convert 1-based indices to 0-based indices
        l1--; r1--; l2--; r2--; 

        // Calculate the modulo 9 value of the first substring (l1 to r1)
        long long left = 0;
        for (int i = l1; i <= r1; ++i) {
            left = (left * 10 + (s[i] - '0')) % 9;
        }

        // Calculate the modulo 9 value of the second substring (l2 to r2)
        long long right = 0;
        for (int i = l2; i <= r2; ++i) {
            right = (right * 10 + (s[i] - '0')) % 9;
        }

        // Check if the product modulo 9 equals the given remainder r
        if ((left * right) % 9 == r) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
