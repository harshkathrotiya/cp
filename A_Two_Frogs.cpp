#include <iostream>
#include <cmath>  // For abs function
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int a, b, c;
        cin>>a>>b>>c;
        if ((abs(b-c)-1) % 2 == 1) 
        {
            cout<<"YES"<<endl;  
        } 
    else 
        {
            cout<<"NO"<<endl;   
        }
    }

    return 0;
}
