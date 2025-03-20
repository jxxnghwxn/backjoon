#include <bits/stdc++.h>
using namespace std;

int n, t;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> t;
  while (t--) {
    cin >> n;
    int cnt = 0;
    for (int i = 5; i <= n; i *= 5) {
      cnt += n / i;
    }
    cout << cnt << "\n";
  }

  return 0;
}
