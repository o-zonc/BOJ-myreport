#include <iostream>
#include <vector>

using namespace std;

vector<int> Nt(int n, int b) {
    int tmp = n;
    vector<int> pal;
    while (tmp) {
        pal.push_back(tmp % b);
        tmp /= b;
    }
    return pal;
}

bool valid(vector<int> pal) {
    int sz = pal.size();
    for (int i = 0; i < sz / 2; i++)
        if (pal[i] != pal[sz - i - 1])
            return false;
    return true;
}

int main() {
    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        int isValid = 0;
        for (int b = 2; b <= 64; b++) {
            vector<int> pal = Nt(n, b);
            if (valid(pal)) {
                isValid = 1;
                break;
            }
        }
        cout << isValid << '\n';
    }
}