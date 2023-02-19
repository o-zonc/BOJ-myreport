#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (1) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0) break;

        vector<int> triangle;
        triangle.push_back(a);
        triangle.push_back(b);
        triangle.push_back(c);

        sort(triangle.begin(), triangle.end());
        if (triangle[2] >= triangle[1] + triangle[0]) {
            cout << "Invalid" << '\n';
            continue;
        } 

        if (a == b && b == c)
            cout << "Equilateral" << '\n';
        else if (a == b || b == c || c == a)
            cout << "Isosceles" << '\n';
        else
            cout << "Scalene" << '\n';
    }
}