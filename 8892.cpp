#include <iostream>
#include <string>

using namespace std;

int Palindrome(string s1, string s2) {
    string str = s1 + s2;

    int left = 0;
    int right = str.size() - 1;

    while (left < right) {
        if (str[left] != str[right]) return 0;

        left++;
        right--;
    }

    return 1;
}

int main() {
    int t;

    cin >> t;
    
    while (t--) {
        int n, f = 0;
        string str[101];

        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> str[i];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                f = Palindrome(str[i], str[j]);

                if (f) {
                    cout << str[i] << str[j] << '\n';
                    break;
                }
            }
            if (f) break;
        }
        if (!f) cout << 0 << '\n';
    }

    return 0;
}