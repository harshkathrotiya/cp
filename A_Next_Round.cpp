#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Enable fast I/O
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);

    // Read the number of elements and the threshold value
    int n, m;
    cin >> n >> m;

    // Check if n is a positive integer
    if (n <= 0)
    {
        cout << "Invalid input for n. n should be a positive integer." << endl;
        return 1;
    }

    // Create an array to store the elements
    int arr[n];

    // Read the elements and count those greater than m and equal to m
    int ct = 0, eq = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > m)
            ct++;  // Count elements greater than m
        if (arr[i] == m)
            eq++;  // Count elements equal to m
    }

    // Output the count of elements greater than m, or n if all elements are equal to m, or 0 otherwise
    cout << (ct > 0 ? ct : (eq == n ? n : 0));

    return 0;
}