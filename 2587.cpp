#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int sum = 0;
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int average = sum / 5;
    cout << average << '\n' << arr[2]; 
}