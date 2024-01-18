#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void solve(int S) {
    vector<vector<int>> grid(5, vector<int>(5, -1));
    vector<int> primes;
    for (int i = 2; i <= 99999; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    int count = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            while (count < primes.size()) {
                int sum = 0;
                int num = primes[count];
                while (num > 0) {
                    sum += num % 10;
                    num /= 10;
                }
                if (sum == S) {
                    grid[i][j] = primes[count];
                    count++;
                    break;
                }
                count++;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int S = 11;
    solve(S);
    return 0;
}
