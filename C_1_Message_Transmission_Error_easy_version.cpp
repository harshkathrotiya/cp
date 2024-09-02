#include <iostream>
#include <string>

using namespace std;

bool canFormMergedMessage(const string &t, const string &s) {
    int len_t = t.length();
    int len_s = s.length();
    
    // Check for all possible overlaps
    for (int overlap = 1; overlap < len_s; ++overlap) {
        string merged = s + s.substr(overlap);
        if (merged == t) {
            return true;
        }
    }
    
    return false;
}

int main() {
    string t;
    cin >> t;
    
    int len_t = t.length();
    
    // Try every possible length of s
    for (int L = 1; L <= len_t / 2; ++L) {
        if (len_t % L == 0) {
            string s = t.substr(0, L);
            if (canFormMergedMessage(t, s)) {
                cout << "YES" << endl;
                cout << s << endl;
                return 0;
            }
        }
    }
    
    cout << "NO" << endl;
    return 0;
}
