#include <iostream>

using namespace std;

int num[1001][8], score[1001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 0; j < 5; j++)
            cin >> num[i][j];

    int max = 0;
    int ans = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 0; j < 5; j++)
            for (int k = j + 1; k < 5; k++)
                for (int l = k + 1; l < 5; l++)
                    if (score[i] < (num[i][j] + num[i][k] + num[i][l]) % 10)
                        score[i] = (num[i][j] + num[i][k] + num[i][l]) % 10;

    for (int i = 1; i <= n; i++) {
        if (max < score[i]) {
            max = score[i];
            ans = i;
        }
        if (max == score[i])
            if (i > ans) ans = i;
    }

    cout << ans;
}