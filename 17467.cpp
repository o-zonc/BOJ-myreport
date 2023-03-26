#include <algorithm>
#include <cmath>
#include <complex>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define repp(i, a) for (int i = 1; i <= a; i++)
#define eb emplace_back
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define Fi first
#define Se second
#define INF 987654321
#define IINF 987654321987654321
#define LINF 987654321987654321
// 0x3F3F3F3F3F3F3F3Fll
#define sz(v) ((int)((v).size()))
#define all(v) v.begin(), v.end()
#define pq priority_queue
#define BIGMOD 9223372036854775783
#define eps 1e-7
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<bool, bool> pbb;
typedef pair<ll, ll> pll;
typedef pair<bool, int> pbi;
typedef pair<ll, int> pli;
typedef pair<pll, ll> plll;

typedef vector<ll> poly;
typedef complex<double> cd;

const double PI = acos(-1.L);
ll p, k;
ll INV(ll a, ll m) {
    ll m0 = m, t, q;
    ll x0 = 0, x1 = 1;
    if (m == 1) return 0;
    while (a > 1) {
        // q is quotient
        q = a / m, t = m;
        // m is remainder now
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    // Make x1 positive
    if (x1 < 0) x1 += m0;
    return x1;
}
void FFT(vector<cd> &a, bool inv) {
    int n = a.size();
    for (int i = 1, j = 0; i < n; i++) {
        int bit = n >> 1;
        for (; j >= bit; bit >>= 1) j -= bit;
        j += bit;
        if (i < j) swap(a[i], a[j]);
    }
    for (int i = 1; i < n; i *= 2) {
        double w = acos(-1) / i;
        if (inv) w = -w;
        cd x(cos(w), sin(w));
        for (int j = 0; j < n; j += i * 2) {
            cd y(1);
            for (int k = 0; k < i; k++) {
                cd z = a[i + j + k] * y;
                a[i + j + k] = a[j + k] - z;
                a[j + k] += z;
                y *= x;
            }
        }
    }
    if (inv)
        for (int i = 0; i < n; i++) a[i] /= n;
}

inline ll dtol(double d) {
    return (ll)(d + (d > 0 ? 0.5 : -0.5));
}

poly multiply(poly a, poly b) {
    int n;
    for (n = 1; n < a.size() + b.size(); n <<= 1)
        ;
    vector<cd> A(n), B(n);
    for (int i = 0; i < a.size(); i++) A[i] = a[i];
    for (int i = 0; i < b.size(); i++) B[i] = b[i];
    FFT(A, false);
    FFT(B, false);
    for (int i = 0; i < n; i++) {
        A[i] *= B[i];
    }
    FFT(A, true);
    poly r(a.size() + b.size());
    for (int i = 0; i < r.size(); i++) r[i] = (dtol(A[i].real())) % p;
    return r;
}

poly inverse(poly a, int m) {
    poly r(1);
    r[0] = INV(a[0], p);
    for (int n = 1; n < m;) {
        n = min(n * 2, m);
        poly t(a.begin(), n < a.size() ? a.begin() + n : a.end());
        t = multiply(r, t);
        t.resize(n);
        t[0] = 2 - t[0];
        for (int i = 1; i < n; i++) t[i] = -t[i];
        r = multiply(r, t);
        r.resize(n);
    }
    return r;
}

poly divide_nlogn(poly a, poly b) {
    int m = a.size() - b.size() + 1;
    poly q = multiply(a, inverse(b, m));
    q.resize(m);
    poly bq = multiply(q, b);
    bq.resize(q.size() + b.size() - 1);
    poly res;
    bool start = false;
    rep(i, 0, a.size()) {
        ll X = (a[i] - bq[i]) % p;
        if (!start && X) start = true;
        if (start) res.pb(X);
    }
    return res;
}
vector<pair<poly, int>> segpoly;  // int가 차수
int nk = 1;
void preset(int k) {
    while (nk < k) nk <<= 1;
    segpoly.resize(2 * nk + 10);
    rep(i, 0, k) {
        segpoly[nk + i] = {{1, (-(k * i) % p)}, 1};
    }
    rep(i, nk + k, nk << 1) {
        segpoly[i] = {{1}, 0};
    }
    for (int i = nk - 1; i >= 2; i--) {
        segpoly[i].Se = segpoly[i << 1].Se + segpoly[i << 1 | 1].Se;
        segpoly[i].Fi = multiply(segpoly[i << 1].Fi, segpoly[i << 1 | 1].Fi);
        segpoly[i].Fi.resize(segpoly[i].Se + 1);
    }
}
ll ans = 1;
void multipoint(const poly &f, int T) {
    if (T >= nk) {
        ans = (ans * f[0]) % p;
        return;
    }
    poly &fr = segpoly[T << 1].Fi;
    poly &ba = segpoly[T << 1 | 1].Fi;
    poly f0 = divide_nlogn(f, fr);
    poly f1 = divide_nlogn(f, ba);
    if (!(fr.size() == 1 && fr[0] == 1)) multipoint(f0, T << 1);
    if (!(fr.size() == 1 && ba[0] == 1)) multipoint(f1, T << 1 | 1);
    return;
}
ll n;
poly f = {1};
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> p;
    k = (ll)sqrt(n);
    rep(i, 1, k + 1) {
        poly tmp = {1, i};
        int fS = (int)f.size();
        f = multiply(f, tmp);
        f.resize(fS + 1);
    }
    preset(k);
    multipoint(f, 1);
    rep(i, k * k + 1, n + 1) {
        ans = (ans * i) % p;
    }
    cout << (ans + p) % p;
}