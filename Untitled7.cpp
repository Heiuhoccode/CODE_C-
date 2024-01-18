#include <iostream>
#include <cmath>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long find_smallest_multiple(int X, int Y, int Z, int N) {
    int lcm_XY = (X * Y) / gcd(X, Y);
    int lcm_XYZ = (lcm_XY * Z) / gcd(lcm_XY, Z);

    long long power_of_10 = 1;
    for (int i = 0; i < N - 1; ++i) {
        power_of_10 *= 10;
    }

    long long result = lcm_XYZ;
    if (result < power_of_10) {
        result = (power_of_10 / lcm_XYZ + 1) * lcm_XYZ;
    }

    return result;
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int X, Y, Z, N;
        std::cin >> X >> Y >> Z >> N;
        long long result = find_smallest_multiple(X, Y, Z, N);

        if (result >= pow(10, N)) {
            std::cout << -1 << std::endl;
        } else {
            std::cout << result << std::endl;
        }
    }

    return 0;
}

