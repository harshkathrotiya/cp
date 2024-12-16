#include <iostream>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // Create a boolean array to mark the positions
    bool pos[13] = {false}; // 1 to 12, index 0 is unused
    pos[a] = pos[b] = true; // Mark 'a' positions
    pos[c] = pos[d] = false; // Mark 'b' positions

    // Check for patterns "abab" and "baba"
    bool isABAB = (pos[1] && pos[2] && !pos[3] && !pos[4]) || (pos[3] && pos[4] && !pos[5] && !pos[6]) ||
                  (pos[5] && pos[6] && !pos[7] && !pos[8]) || (pos[7] && pos[8] && !pos[9] && !pos[10]) ||
                  (pos[9] && pos[10] && !pos[11] && !pos[12]) || (pos[11] && pos[12]);

    bool isBABA = (!pos[1] && pos[2] && pos[3] && !pos[4]) || (!pos[3] && pos[4] && pos[5] && !pos[6]) ||
                  (!pos[5] && pos[6] && pos[7] && !pos[8]) || (!pos[7] && pos[8] && pos[9] && !pos[10]) ||
                  (!pos[9] && pos[10] && pos[11] && !pos[12]) || (!pos[11] && pos[12]);

    cout << (isABAB || isBABA ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t; 
    while (t--) solve();

    return 0;
}