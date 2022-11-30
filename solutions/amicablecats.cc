#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define rep(x, start, end) \
  for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
       ((start) < (end) ? x++ : x--))
#define rap(i, v) for (auto i : (v))
#define setup \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr); \
  cout.tie(nullptr);
#define nl '\n'
#define pr pair
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cerr << #x << ": " << x << '\n';

ll solve(ll n) {
  ll res(0);
  for (ll i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      res += i;
      if (i != n / i) res += n / i;
    }
  }
  return res - n;
}

int main() {
  setup;
  ll n;
  cin >> n;
  ll ans = solve(n);
  if (solve(ans) == n && ans != n)
    cout << ans << nl;
  else
    cout << -1 << nl;
}
