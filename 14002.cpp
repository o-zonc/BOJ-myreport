#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int N, A[1001], len;
int idx, tmp;
int dp[1001];
vector<int> v;

int main() {
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        len = 0;

        for (int j = 1; j < i; j++) {
            if (A[j] < A[i])
                len = max(dp[j], len);
        }
        dp[i] = len + 1;

        // 최대 길이와 최대 값 저장
        if (tmp < len + 1) {
            tmp = len + 1;  // 최대 길이
            idx = i;      // 최대 값의 인덱스
        }
    }

    for (int i = idx; i >= 1; i--) {
        if (dp[i] == tmp) {
            v.push_back(A[i]);
            tmp--;
        }
    }

    int size = v.size();
    cout << size << '\n';
    for (int i = 0; i < size; i++) {
        cout << v.back() << " ";
        v.pop_back();
    }
}