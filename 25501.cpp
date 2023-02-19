#include <iostream>
#include <cstring>

using namespace std;

int call;

int recursion(char* s, int l, int r) {
    call++;
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return recursion(s, l + 1, r - 1);
}

int isPalindrome(char* s) {
    call = 0;
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char in[1001];
        cin >> in;

        cout << isPalindrome(in) << ' ' << call << '\n';
    }
}