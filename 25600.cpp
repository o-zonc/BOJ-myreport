#include <iostream>

using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin>>n;

    ll lg = 0;
    while(n--){
        ll a, d, g;
        cin>>a>>d>>g;

        ll scr = a * (d + g);
        if (a == d + g) scr *= 2;

        lg = max(lg, scr);
    }

    cout << lg;
}