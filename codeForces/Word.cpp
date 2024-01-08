
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string word;
    cin >> word;

    int upperCount = 0, lowerCount = 0;

    for (char letter : word) {
        if (isupper(letter)) {
            upperCount++;
        } else {
            lowerCount++;
        }
    }

    if (upperCount > lowerCount) {

        for (char &letter : word) {
            letter = toupper(letter);
        }
    } else {

        for (char &letter : word) {
            letter = tolower(letter);
        }
    }

    cout << word << endl;

    return 0;
}
