#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void count_coins(int amount) {
    const vector<int> denominations = {100, 20, 10, 5, 1};
    vector<int> coin_counts(denominations.size(), 0);

    for (size_t i = 0; i < denominations.size(); ++i) {
        if (amount >= denominations[i]) {
            coin_counts[i] = amount / denominations[i];
            amount %= denominations[i];
        }
    }

    int sum = 0;
    for (size_t i = 0; i < coin_counts.size(); ++i) {
        sum += coin_counts[i];
        cout << coin_counts[i] << " ";
    }

    cout << "Total coins: " << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int amount;
    cin >> amount;

    if (amount < 0) {
        cerr << "Error: Amount cannot be negative." << endl;
        return 1;
    }

    count_coins(amount);

    return 0;
}