#include <iostream>
#include <string>

using namespace std;

int cnt[9];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string no;
    cin >> no;

    for (int i = 0; i < no.length(); i++) {
        if (no[i] == '9')
            cnt[6]++;
        else
            cnt[no[i] - '0']++;
    }

    cnt[6] = (cnt[6] + 1) / 2;
    int m = 0;
    for (int i = 0; i < 9; i++)
        m = max(cnt[i], m);

    cout << m;
}