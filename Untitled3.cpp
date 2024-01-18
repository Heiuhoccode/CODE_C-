#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Request {
    int start_day;
    int end_day;
};

bool compareRequests(const Request& a, const Request& b) {
    return a.end_day < b.end_day;
}

int maxRentDays(vector<Request>& requests, int M) {
    sort(requests.begin(), requests.end(), compareRequests);

    vector<int> available(M + 1, 0);

    for (int i = 0; i < requests.size(); i++) {
        for (int j = requests[i].end_day; j >= requests[i].start_day; j--) {
            if (available[j] == 0) {
                available[j] = 1;
                break;
            }
        }
    }

    int totalDays = 0;
    for (int i = 1; i <= M; i++) {
        totalDays += available[i];
    }

    return totalDays;
}

int main() {
    int M, N;
    cin >> M >> N;

    vector<Request> requests(N);

    for (int i = 0; i < N; i++) {
        cin >> requests[i].start_day >> requests[i].end_day;
    }

    int result = maxRentDays(requests, M);
    cout << "T?ng s? ngày thuê máy là: " << result << endl;

    return 0;
}

