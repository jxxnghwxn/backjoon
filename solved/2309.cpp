#include <bits/stdc++.h>
using namespace std;

int ar[9], sum;
vector<int> ve;
pair<int, int> ret;

void solve() {
  for (int i = 0; i < 9; ++i) {
    for (int j = i + 1; j < 9; ++j) {
      if (sum - ar[i] - ar[j] == 100) {
        ret = {i, j};
        return;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 0; i < 9; ++i) {
    cin >> ar[i];
    sum += ar[i];
  }

  solve();

  for (int i = 0; i < 9; ++i) {
    if (i == ret.first || i == ret.second) continue;
    ve.push_back(ar[i]);
  }

  sort(ve.begin(), ve.end());
  for (int i : ve) cout << i << " ";

  return 0;
}
