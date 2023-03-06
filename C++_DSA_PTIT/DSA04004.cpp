#include <iostream>
#include <cmath>

using namespace std;

int findNumber(int n, int k) {
    // tìm số phần tử của dãy số
    int length = pow(2, n) - 1;

    // nếu k vượt quá số phần tử của dãy số, trả về -1
    if (k > length) {
        return -1;
    }

    // trường hợp cơ bản
    if (n == 1) {
        return k == 1 ? 1 : -1;
    }

    // tìm số phần tử của phần giữa
    int middleLength = pow(2, n - 1) - 1;

    // nếu k nằm trong phần giữa, tiếp tục tìm kiếm trong phần giữa
    if (k == middleLength + 1) {
        return 1;
    } else if (k < middleLength + 1) {
        return findNumber(n - 1, k);
    } else {
        return findNumber(n - 1, k - middleLength - 1);
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int result = findNumber(n, k);
    cout << result << endl;
    return 0;
}
