#define _USE_MATH_DEFINES
// #include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <vector>
#include <queue>
#include <list>
#include <climits> // LLONG_MAX
#include <iomanip>
#include <numeric> // partial sum, iota
#include <string.h> // strchar (print)
#include <chrono>
using namespace std;
using namespace std::chrono;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

/*#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;

typedef tree <
ll,
null_type,
less<ll>,
rb_tree_tag,
tree_order_statistics_node_update >
ordered_set;
#define ofk order_of_key*/

#ifndef ONLINE_JUDGE
#define _NTH_ARG(_1, _2, _3, _4, _5, _6, N, ...) N
#define _FE_1(_CALL, x) _CALL(x)
#define _FE_2(_CALL, x, ...) _CALL(x) cerr << " "; _FE_1(_CALL, __VA_ARGS__)
#define _FE_3(_CALL, x, ...) _CALL(x) cerr << " "; _FE_2(_CALL, __VA_ARGS__)
#define _FE_4(_CALL, x, ...) _CALL(x) cerr << " "; _FE_3(_CALL, __VA_ARGS__)
#define _FE_5(_CALL, x, ...) _CALL(x) cerr << " "; _FE_4(_CALL, __VA_ARGS__)
#define _FE_6(_CALL, x, ...) _CALL(x) cerr << " "; _FE_5(_CALL, __VA_ARGS__)
#define FOR_EACH_MACRO(MACRO, ...)                                             \
  _NTH_ARG(__VA_ARGS__, _FE_6, _FE_5, _FE_4, _FE_3, _FE_2, _FE_1)              \
  (MACRO, __VA_ARGS__)
#define watch(x) cerr << #x " = " << (x);
#define print(...)                                                             \
FOR_EACH_MACRO(watch, __VA_ARGS__)                                           \
cerr << '\n';

#define show_tc(Test) cerr << "\t| TEST " << Test << " |" << '\n';
#define end_tc() cerr << "\n-----[end]--------\n\n";
#else
#define print(...)
#define show_tc(Test)
#define end_tc()
#endif

template <class T1, class T2>
ostream & operator<<(ostream &os, const pair<T1, T2> &p)
{
    return os << '{' << p.first << ", " << p.second << '}';
}

template < class T, class = decltype(begin(declval<T>())),
           class = enable_if_t < !is_same<T, string>::value >>
ostream & operator<<(ostream &os, const T &c)
{
    os << '[';
    for (auto it = begin(c); it != end(c); ++it)
        os << (it == begin(c) ? "" : ", ") << *it;
    return os << ']';
}

namespace Fread
{
const int SIZE = 1 << 16;
char buf[SIZE], *S, *T;
inline char getchar()
{
    if (S == T)
    {
        T = (S = buf) +
            fread(buf, 1, SIZE, stdin); if (S == T)return'\n';
    } return *S++;
}
}
namespace Fwrite
{
const int SIZE = 1 << 16;
char buf[SIZE], *S = buf, *T = buf + SIZE;
inline void flush() {fwrite(buf, 1, S - buf, stdout); S = buf;}
inline void putchar(char c) {*S++ = c; if (S == T)flush();}
struct NTR {~NTR() {flush();}} ztr;
} // namespace Fwrite
#ifdef ONLINE_JUDGE
#define getchar Fread::getchar
#define putchar Fwrite::putchar
#endif


namespace Fastio
{
struct Reader
{
    template<typename T>Reader&operator>>(T&x)
    {
        char c = getchar(); short f = 1;
        while (c < '0' || c > '9') {if (c == '-')f *= -1; c = getchar();}
        x = 0; while (c >= '0' && c <= '9')
        {
            x = (x << 1) + (x << 3) + (c ^ 48);
            c = getchar();
        } x *= f; return *this;
    }
    Reader&operator>>(double&x)
    {
        char c = getchar(); short f = 1, s = 0; x = 0; double t = 0;
        while ((c < '0' || c > '9') && c != '-' && c != '.') {if (c == '-')f *= -1; c = getchar();}
        while (c >= '0' && c <= '9' && c != '.')x = x * 10 + (c ^ 48), c = getchar();
        if (c == '.')c = getchar(); else return x *= f, *this;
        while (c >= '0' && c <= '9')t = t * 10 + (c ^ 48), s++, c = getchar();
        while (s--)t /= 10.0; x = (x + t) * f; return*this;
    }
    Reader&operator>>(long double&x)
    {
        char c = getchar(); short f = 1, s = 0; x = 0; long double t = 0;
        while ((c < '0' || c > '9') && c != '-' && c != '.') {if (c == '-')f *= -1; c = getchar();}
        while (c >= '0' && c <= '9' && c != '.')x = x * 10 + (c ^ 48), c = getchar();
        if (c == '.')c = getchar(); else return x *= f, *this;
        while (c >= '0' && c <= '9')t = t * 10 + (c ^ 48), s++, c = getchar();
        while (s--)t /= 10.0; x = (x + t) * f; return*this;
    }
    Reader&operator>>(__float128&x)
    {
        char c = getchar(); short f = 1, s = 0; x = 0; __float128 t = 0;
        while ((c < '0' || c > '9') && c != '-' && c != '.') {if (c == '-')f *= -1; c = getchar();}
        while (c >= '0' && c <= '9' && c != '.')x = x * 10 + (c ^ 48), c = getchar();
        if (c == '.')c = getchar(); else return x *= f, *this;
        while (c >= '0' && c <= '9')t = t * 10 + (c ^ 48), s++, c = getchar();
        while (s--)t /= 10.0; x = (x + t) * f; return*this;
    }
    Reader&operator>>(char&c)
    {
        c = getchar(); while (c == '\n' || c == ' ' || c == '\r')c = getchar();
        return *this;
    }
    Reader&operator>>(char*str)
    {
        int len = 0; char c = getchar();
        while (c == '\n' || c == ' ' || c == '\r')c = getchar();
        while (c != '\n' && c != ' ' && c != '\r')str[len++] = c, c = getchar();
        str[len] = '\0'; return*this;
    }
    Reader&operator>>(string&str)
    {
        str.clear(); char c = getchar();
        while (c == '\n' || c == ' ' || c == '\r')c = getchar();
        while (c != '\n' && c != ' ' && c != '\r')str.push_back(c), c = getchar();
        return*this;
    }

    Reader() {}
} cin;
template<typename T> Reader& operator>>(Reader& is, vector<T>& v) { for (auto& i : v) is >> i;        return is; }
template<typename T> Reader& operator>>(Reader& is, pair<T, T>& v) { is >> v.first >> v.second;        return is; }

void Getline(string &str)
{
    str.clear(); char c = getchar();
    while (c == '\n' || c == ' ' || c == '\r')c = getchar();
    while (c != '\n' && c != '\r')str.push_back(c), c = getchar();
}

const char endl = '\n';
struct Writer
{
    const int Setprecision = 9;
    typedef int mxdouble;
    template<typename T>Writer&operator<<(T x)
    {
        if (x == 0)return putchar('0'), *this;
        if (x < 0)putchar('-'), x = -x;
        static int sta[45]; int top = 0;
        while (x)sta[++top] = x % 10, x /= 10;
        while (top)putchar(sta[top] + '0'), --top;
        return*this;
    }
    Writer&operator<<(double x)
    {
        if (x < 0)putchar('-'), x = -x;
        mxdouble _ = x; x -= (double)_; static int sta[45]; int top = 0;
        while (_)sta[++top] = _ % 10, _ /= 10; if (!top)putchar('0');
        while (top)putchar(sta[top] + '0'), --top; putchar('.');
        for (int i = 0; i < Setprecision; i++)x *= 10;
        _ = x; while (_)sta[++top] = _ % 10, _ /= 10;
        for (int i = 0; i < Setprecision - top; i++)putchar('0');
        while (top)putchar(sta[top] + '0'), --top;
        return*this;
    }
    Writer&operator<<(long double x)
    {
        if (x < 0)putchar('-'), x = -x;
        mxdouble _ = x; x -= (long double)_; static int sta[45]; int top = 0;
        while (_)sta[++top] = _ % 10, _ /= 10; if (!top)putchar('0');
        while (top)putchar(sta[top] + '0'), --top; putchar('.');
        for (int i = 0; i < Setprecision; i++)x *= 10;
        _ = x; while (_)sta[++top] = _ % 10, _ /= 10;
        for (int i = 0; i < Setprecision - top; i++)putchar('0');
        while (top)putchar(sta[top] + '0'), --top;
        return*this;
    }
    Writer&operator<<(__float128 x)
    {
        if (x < 0)putchar('-'), x = -x;
        mxdouble _ = x; x -= (__float128)_; static int sta[45]; int top = 0;
        while (_)sta[++top] = _ % 10, _ /= 10; if (!top)putchar('0');
        while (top)putchar(sta[top] + '0'), --top; putchar('.');
        for (int i = 0; i < Setprecision; i++)x *= 10;
        _ = x; while (_)sta[++top] = _ % 10, _ /= 10;
        for (int i = 0; i < Setprecision - top; i++)putchar('0');
        while (top)putchar(sta[top] + '0'), --top;
        return*this;
    }
    Writer&operator<<(char c) {putchar(c); return*this;}
    Writer& operator<<(char*str)
    {
        int cur = 0; while (str[cur])putchar(str[cur++]);
        return *this;
    }
    Writer&operator<<(const char*str)
    {
        int cur = 0; while (str[cur])putchar(str[cur++]);
        return*this;
    }
    Writer&operator<<(string str)
    {
        int st = 0, ed = str.size();
        while (st < ed)putchar(str[st++]);
        return*this;
    }
    Writer() {}
} cout;

template<typename T> Writer& operator<<(Writer& os, const vector<T>& v) { for (auto& i : v) os << i << " "; return os; }
template<typename T> Writer& operator<<(Writer& os, const pair<T, T>& v) { os << v.first << " " << v.second; return os; }
}
#define cin Fastio :: cin
#define cout Fastio :: cout
#define endl Fastio :: endl
using namespace Fastio;

struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

//---------------------------- Defines -----------------------------//
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define array_size(x) ll(sizeof(x) / sizeof(x[0]))
#define pb push_back
#define count_set_bits_ll(x) __builtin_popcountll(x)
#define string_to_ll(x) atoll(x.c_str());
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
ll mod_add(ll a, ll b, ll m = MOD) {a %= m; b %= m; return ((a + b) % m + m) % m;}
ll mod_sub(ll a, ll b, ll m = MOD) {a %= m; b %= m; return ((a - b) % m + m) % m;}
ll mod_mul(ll a, ll b, ll m = MOD) {a %= m; b %= m; return ((a * b) % m + m) % m;}
vector<ll> sieve(ll n) {ll*arr = new ll[n + 1](); vector<ll> vect; for (ll i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (ll j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
//--------------------- User-defined Functions ---------------------//

//------------------------------------------------------------------//
bool MULTIPLE_TC = 1;
void solution()
{
    ll n, k; cin >> n >> k;
    
    if(n%2==k%2 && k*k<=n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}
signed main()
{
    freopen("error.txt", "w", stderr); ll T = 1;
    if (MULTIPLE_TC) cin >> T;
    for (ll Test = 1; Test <= T; ++Test)
    {
        show_tc(Test);
        solution();
        cout << endl;
        end_tc();
    }

    return 0;
}