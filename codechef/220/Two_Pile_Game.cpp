#include <bits/stdc++.h>
#ifdef AHAD
    #include "./debug.h"
    #define debug(...) debug_internal(__VA_ARGS__)
#else
    #define debug(...)
#endif

using namespace std;

using ll = long long;
using ld = long double;
 
#define sp << " " << 
#define pb push_back
#define F first
#define S second
#define PI acos(-1.0)
 
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sortall(x) sort(all(x))
#define sortrall(x) sort(rall(x))
 
#define printv(v) for(auto x : v) cout << x << " "; cout << "\n"
#define printm(m) for(auto x : m) cout << x.F sp x.S << "\n"
 
#define make_unique(x) sortall(x); (x).resize(unique(all(x)) - (x).begin())
#define numtobin(n, c) bitset<32>(n).to_string()
#define bintoint(bin_str) stoi(bin_str, nullptr, 2)
 
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
 
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
 
template<typename T1, typename T2>
using safe_map = unordered_map<T1, T2, custom_hash>;
 
template<typename T>
using safe_set = unordered_set<T, custom_hash>;
 
inline void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
 
inline void fraction(int n) {
    cout.unsetf(ios::floatfield); 
    cout.precision(n); 
    cout.setf(ios::fixed,ios::floatfield);
}
 
inline void yn(bool res, bool cap = true) {
    vector<string> s = {"Yes", "YES", "No", "NO"};
    cout << ((res) ? s[0 + cap] : s[2 + cap]) << "\n";
}

inline ll nxt() { ll x; cin >> x; return x;}
inline ld nxtD() { ld x; cin >> x; return x;}
inline string nxtStr() { string x; cin >> x; return x;}
 
template<typename T, typename U>
void chmin(T &x, U y) { 
    if (y < x) x = y;
}

template<typename T, typename U>
void chmax(T &x, U y) { 
    if (y > x) x = y;
}
 
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void proc(){
 
}

void solve() {
    #define test
    ll n, m; cin >> n >> m;
    cout << ((n & 1) ? "Alice\n" : "Bob\n") ;
}   
 
int main() {
    fastIO(); 
    proc();
 
    int tc = 1;
#ifdef test
    tc = nxt();
#endif
    for (int t = 1; t <= tc; t++) {
    #ifdef case
        cout << "Case " << t << ": ";
    #endif
        solve();
    }
}