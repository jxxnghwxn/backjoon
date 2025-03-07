#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
int home, cnt;

int main() {
  // ios_base::sync_with_stdio(false);
  // cin.tie(nullptr);
  // cout.tie(nullptr);

  while (cin >> n) {
    home = 1;
    cnt = 1;
    while (1) {
      if (home % n == 0) {
        cout << cnt << "\n";
        break;
      }
      else {
        home = (home * 10) + 1;
        home %= n;
        cnt++;
      }
    }
  }
  return 0;
}
