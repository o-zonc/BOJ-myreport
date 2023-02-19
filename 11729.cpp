#include <iostream>

using namespace std;

// from번 기둥에서 to번 기둥으로 n개의 원반을 최소 횟수로 모두 이동시킬 때, 각 선택에서 n번 원반의 기둥의 맨 위 원반을 m번 원반에 옮길 때, 이를 n m으로 나타내고 각 선택의 표현을 줄바꿈으로 구분한다.
void hanoi(int from, int to, int n) {
    if (n == 1) {
        cout << from << ' ' << to << '\n';
        return;
    }
    int empty = 6 - from - to;  // 빈 원반의 번호
    // from, to, empty는 각각 1, 2, 3 중 하나이고 서로 다르므로 from+to+empty=1+2+3=6이고, from과 to를 우변으로 이항하면
    // empty=6-from-to 를 얻는다.
    hanoi(from, empty, n - 1);
    cout << from << ' ' << to << '\n';
    hanoi(empty, to, n - 1);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    cout << (1 << n) - 1 << '\n';
    hanoi(1, 3, n);
}