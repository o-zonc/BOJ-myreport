#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string dp[101][101] = {
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

string combi(int n, int r) {
    if (n == r || r==0) return "1";

    string &ans = dp[n][r];

    if (ans != "") return ans;
    ans = strSum(combi(n - 1, r), combi(n - 1, r - 1));

    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    cout << combi(n, m) << '\n';
}