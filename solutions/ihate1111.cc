// ihate1111
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define rep(i, s, e) for (ll i = (s); i < (e); i++)
#define per(i, s, e) for (ll i = (s); i > (e); i--)
#define f0r(i, n) for (ll i = 0; i < (n); i++)
#define r0f(i, n) for (ll i = (n); i >= 0; i--)
#define far(i, v) for (auto i : (v))
#define setup                       \
	ios_base::sync_with_stdio(false); \
	cin.tie(nullptr);                 \
	cout.tie(nullptr);
template <typename T>
inline void in(T& inVar) {
	cin >> inVar;
}
template <typename T, typename... S>
inline void in(T& inVar, S&... args) {
	cin >> inVar;
	in(args...);
}
template <typename T>
inline void out(T outVar) {
	cout << outVar << '\n';
}
template <typename T, typename... S>
inline void out(T outVar, S... args) {
	cout << outVar << ' ';
	out(args...);
}
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
typedef vector<pi> vpi;
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define st stack
#define ma map
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pb push_back
#define mp make_pair

int main() {
	setup;
	ll t;
	in(t);
	while (t--) {
		ll n;
		in(n);
		f0r(i, 20) {
			if (n % 11 == 0) {
				out("YES");
				goto done;
			}
			n -= 111;
			if (n < 0) break;
		}
		out("NO");
	done:;
	}
}
