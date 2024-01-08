#include <iostream>
using namespace std;
bool isLucky(int digit) {
    return digit == 4 || digit == 7;
}

int countLuckyDigits(long long n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (isLucky(digit)) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main() {
    long long n;
    cin >> n;

    int luckyCount = countLuckyDigits(n);

    if (luckyCount == 4 || luckyCount == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

