// https://projecteuler.net/problem=1

#include <iostream>

using namespace std;

typedef long long ll;
#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  ll n(0), d(0), s(0);
  cin >> n;
  // Handle 3
  d = n / 3;
  if (n % 3 == 0) {
    d -= 1;
  }
  s += 3 * ((d * (d + 1)) / 2);
  // Handle 5
  d = n / 5;
  if (n % 5 == 0) {
    d -= 1;
  }
  s += 5 * ((d * (d + 1)) / 2);
  // Handle 15
  d = n / 15;
  if (n % 15 == 0) {
    d -= 1;
  }
  s -= 15 * ((d * (d + 1)) / 2);
  cout << s << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) {
    Solve();
  }
  return 0;
}
