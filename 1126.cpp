#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int dp[51][250001]; // dp[i][j] = i번째 블럭을 사용한 뒤 j의 높이 차가 발생했을 때 더 높은 탑의 높이. 즉, 답은 dp[n][0]이라고 생각할 수 있다.

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    memset(dp, -1, sizeof(dp));
    dp[0][0] = 0;
    for (int i = 0; i < n; i++) {
        int k = arr[i + 1];
        for (int j = 0; j <= 250000; j++) {
            // dp값이 -1임은 해당 값을 만족하는 경우가 없음을 나타낸다. 빠르게 넘어가주자.
            if (dp[i][j] == -1) continue;
            // j + k <= 250000이면 높은 탑에 쌓았을 때 k만큼의 높이 차가 더 생긴다. 이전 단계에 k만큼을 높인 것과 비교해주자.
            if (j+k <= 250000) dp[i + 1][j + k] = max(dp[i + 1][j + k], dp[i][j] + k);
            // 낮은 탑에 쌓을 때는 j >= k이거나 j < k인 두 경우를 살펴봐야 한다.
            // 만약 새 블럭이 높이 차보다 작다면 새로 블럭을 쌓더라도 더 높은 탑이 무엇인지가 바뀌지는 않는다.
            if (j >= k) dp[i + 1][j - k] = max(dp[i + 1][j - k], dp[i][j]);
            // 하지만 새 블럭이 높이 차보다 더 크다면 새로 블럭을 쌓으면 더 높은 탑이 바뀌게 된다. 이때 높이 차는 k - j. 높이 차가 250000을 넘지 않게 주의하자.
            else if (k - j <= 250000) dp[i + 1][k - j] = max(dp[i + 1][k - j], dp[i][j] + k - j);
            // 블럭을 사용하지 않을 수도 있다. 이때는 더 높은 탑이 무엇인지만 비교해 보자.
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
        }
    }

    if (dp[n][0] <= 0) cout << -1;
    else cout << dp[n][0];
}