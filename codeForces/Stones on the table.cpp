#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string colors;
    cin >> colors;
    int count = 0;
    for (int i = 1; i < n; ++i) {
        if (colors[i] == colors[i - 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
