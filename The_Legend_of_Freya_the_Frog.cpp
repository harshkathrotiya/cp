#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int x, y, k;
        std::cin >> x >> y >> k;

        int jumps = 0;

        // Calculate the number of jumps needed to reach x and y separately
        int xJumps = (x + k - 1) / k;  // Ceiling division
        int yJumps = (y + k - 1) / k;  // Ceiling division

        // Since Freya alternates between x and y directions, the total number of jumps
        // is the sum of the ceiling of the division of x by k and the ceiling of the division of y by k,
        // minus 1 if both x and y are not zero and the sum is odd
        jumps = xJumps + yJumps - ((x != 0 && y != 0) && (xJumps + yJumps) % 2 == 1 ? 1 : 0);

        std::cout << jumps << std::endl;
    }

    return 0;
}