#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define hk ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    hk
    int n;
    cin >> n;
    int a = ceil(n / 2.0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && i != a - 1 && j != a - 1)
                cout << "\\";
            else if (i == a - 1 && j == a - 1)
                cout << "X";
            else if (j != a - 1 && i == (n - 1) - j)
                cout << "/";
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}