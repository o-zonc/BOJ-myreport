#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int dpx[3], dpm[3], arr[100002][3];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
  }

  for (int i = 1; i <= n; i++) {
    // 이번 줄에서 동적계획 값 저장
    int a = dpx[0];
    int b = dpx[1];
    int c = dpx[2];

    // max 구하기
    dpx[0] = max(a, b) + arr[i][0];
    dpx[1] = max(a, max(b, c)) + arr[i][1];
    dpx[2] = max(b, c) + arr[i][2];

    // 이번 줄에서 동적계획 값 저장
    a = dpm[0];
    b = dpm[1];
    c = dpm[2];

    // min 구하기
    dpm[0] = min(a, b) + arr[i][0];
    dpm[1] = min(a, min(b, c)) + arr[i][1];
    dpm[2] = min(b, c) + arr[i][2];
  }

  int mx, mn;
  mx = max(dpx[0], max(dpx[1], dpx[2]));
  mn = min(dpm[0], min(dpm[1], dpm[2]));

  cout << mx << " " << mn;
}