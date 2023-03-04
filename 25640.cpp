#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string mbti;
    cin >> mbti;

    int n;
    cin >> n;

    int cnt = 0;
    while (n--) {
        string s;
        cin >> s;

        if (s == mbti) cnt++;
    }

    cout << cnt;
}