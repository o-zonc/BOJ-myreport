#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string dp[1000001] = {
    "",
};

string strSum(string a, string b) {
    int sum = 0;
    string res;
    while (!a.empty() || !b.empty() || sum) {
        if(!a.empty()) {
            sum += a.back() - '0';
            a.pop_back();
        }
        if (!b.empty()) {
            sum += b.back() - '0';
            b.pop_back();
        }

        res.push_back((sum % 10) + '0');
        sum /= 10;
    }
    reverse(res.begin(), res.end());

    return res;
}

string fibo(int n) {
    if (n <= 2) return "1";

    string &ans = dp[n];

    if (ans != "") return ans;
    ans = strSum(fibo(n - 1), fibo(n - 2));

    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    cout << fibo(n) << '\n';
}