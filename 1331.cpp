#include <iostream>
using namespace std;

int map[6][6];
int dp[6][6];

int dx[8] = {-1, -1, 1, 1, -2, -2, 2, 2};
int dy[8] = {-2, 2, -2, 2, -1, 1, -1, 1};

char alpha(char c) {
    return c - 'A';
}

int num(int i) {
    return 6 - i;
}

bool valid(int prevy, int prevx, int now_y, int now_x) {
    for (int i = 0; i < 8; i++) {
        int ny = prevy + dy[i];
        int nx = prevx + dx[i];
        if (nx == now_x && ny == now_y) return true;
    }
    return false;
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int nexty, nextx;
    for (int i = 0; i < 36; i++) {
        string s;
        cin >> s;

        int prevy, prevx;
        char c = s[0];
        int y = num(s[1] - '0');
        int x = alpha(c);

        if (i == 0) {
            prevy = y;
            prevx = x;
            nexty = y;
            nextx = x;
            continue;
        }

        if (i == 35) {
            if (dp[y][x] || !valid(nexty, nextx, y, x)) {
                cout << "Invalid";
                return 0;
            }
        }

        if (!dp[y][x]) {
            if (valid(prevy, prevx, y, x)) {
                dp[y][x] = 1;
                prevy = y;
                prevx = x;
            } else {
                cout << "Invalid";
                return 0;
            }
        } else {
            cout << "Invalid";
            return 0;
        }
    }
    cout << "Valid";
}