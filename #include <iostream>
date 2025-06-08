#include <iostream>
#include <chrono>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace chrono;

void bSort(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> Ns;
    vector<double> times;

    for (int N = 0; N <= 2000; N += 200) {
        vector<int> a(N);
        srand(time(0));
        for (int i = 0; i < N; i++) {
            a[i] = rand() % 10000;
        }

        auto start = high_resolution_clock::now();
        bSort(a);
        auto end = high_resolution_clock::now();
        
        auto dur = duration_cast<microseconds>(end - start);
        
        Ns.push_back(N);
        times.push_back(dur.count());
    }

    cout << "N, Time" << endl;
    for (size_t i = 0; i < Ns.size(); i++) {
        cout << Ns[i] << ", " << times[i] << endl;
    }

    return 0;
}
