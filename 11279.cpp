#include <algorithm>
#include <iostream>

using namespace std;

int heap[200010], last;

void swap(int a, int b) {
    int tmp = heap[a];
    heap[a] = heap[b];
    heap[b] = tmp;
}

void push(int n) {
    heap[++last] = n;

    for (int i = last; i > 1; i /= 2) {
        if (heap[i / 2] < heap[i]) {
            swap(i / 2, i);
        } else {
            break;
        }
    }
}

int pop() {
    int ans = heap[1];
    heap[1] = heap[last];
    heap[last--] = 0;

    int i = 1;
    while (i * 2 <= last) {
        if (heap[i * 2 + 1] == 0) {
            if (heap[i] > heap[i * 2]) {
                break;
            } else if (heap[i] < heap[i * 2]) {
                swap(i, i * 2);
                i = i * 2;
            } else {
                break;
            }
        } else {
            if (heap[i] > heap[i * 2] && heap[i] > heap[i * 2 + 1]) {
                break;
            } else if (heap[i * 2] >= heap[i * 2 + 1]) {
                swap(i, i * 2);
                i = i * 2;
            } else if (heap[i * 2] < heap[i * 2 + 1]) {
                swap(i, i * 2 + 1);
                i = i * 2 + 1;
            } else {
                break;
            }
        }
    }
    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        if (n == 0) {
            if (last == 0) {
                cout << 0 << '\n';
            } else {
                cout << pop() << '\n';
            }
        } else {
            push(n);
        }
    }
}