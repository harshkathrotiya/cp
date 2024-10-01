        #include<bits/stdc++.h>
        #include <iostream>
        #include <vector>
        #include <string>
        using namespace std;
        int main() {
            int t;
            cin >> t;
            while (t--) {
                int a;
                cin >> a;
                vector<string> arr;
                for (int i = 0; i < a; i++) {
                    string x;
                    cin>>x;
                    arr.push_back(x);
                }
                for (int i = a - 1; i >= 0; i--) {
                    for (int j = 0; j < 4; j++) {
                        if (arr[i][j] == '#') {
                            cout << j + 1 << " ";
                        }
                    }
                }
                cout <<endl;
            }
            return 0;
        }
