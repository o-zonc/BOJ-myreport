#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

void bst(int start, int end) {
    if (start >= end) {
        return;
    }

    if (start == end - 1) {
        cout << v[start] << '\n';
        return;
    }

    int idx = start + 1;
    while (idx < end) {
        if (v[start] < v[idx]) {
            break;
        }
        idx++;
    }

    bst(start + 1, idx);
    bst(idx, end);
    cout << v[start] << '\n';
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    while (cin >> n)
        v.push_back(n);

    bst(0, v.size());
}