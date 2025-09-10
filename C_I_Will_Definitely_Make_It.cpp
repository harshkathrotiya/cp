#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int mx = 0;
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }

        if (v[k - 1] == mx) 
        {
            cout << "YES" << endl;
            continue;
        }

        bool flg = false;
        for (int i = 0; i < n; i++) 
        {
            if (v[i] == mx) {
                int time_to_reach = abs(v[k - 1] - mx);
                if (v[k - 1] > time_to_reach) {
                    flg = true;
                    break;
                }
            }
        }

        cout << (flg ? "YES" : "NO") << endl;
    }

    return 0;
}
