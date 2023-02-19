#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<char> v;
    for (int i = 0; i < n; i++) {
        v.push_back('*');
    }

    for (int i = n; i >= 0; i--) {
        for (int j = 0; j < i; j++)
            cout << v[j];
        cout << '\n';
    }
}