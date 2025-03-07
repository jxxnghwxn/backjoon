#include <bits/stdc++.h>
using namespace std;

long long a, b, c, ret = 1;

long long solve(long long a, long long b) {
  if (b == 1) {
    return a % c;
  }

  ret = solve(a, b / 2);
  ret = ret * ret % c;
  if (b % 2) {
    ret = (ret * a) % c;
  }
  return ret;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> a >> b >> c;
  cout << solve(a, b);
  return 0;
}
