#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int sumOfNonLeafNodes(const vector<int>& tree) {
    int n = tree.size();
    if (n == 0) {
        return 0;
    }

    int sum = 0;
    queue<int> q;
    q.push(0);

    for (int i = 0; i < n; ++i) {
        int current = q.front();
        q.pop();

        if (tree[current] != -1) {
            sum += tree[current];
        }

        int leftChild = 2 * current + 1;
        int rightChild = 2 * current + 2;
        if (leftChild < n) {
            q.push(leftChild);
        }
        if (rightChild < n) {
            q.push(rightChild);
        }
    }

    return sum;
}

int main() {
    cout << "Enter the binary tree in level order: ";

    vector<int> tree;
    int value;

    while (cin >> value) {
        tree.push_back(value);

        if (cin.get() == '\n') {
            break;
        }
    }

    int result = sumOfNonLeafNodes(tree);

    cout << "Sample Output: " << result << endl;

    return 0;
}
