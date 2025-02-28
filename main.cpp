#include <bits/stdc++.h>
using namespace std;

int a, b;
int sum, tmp;
vector<int> v;
vector<int> out;

void solve() {
  for (int i = 0; i < 9; ++i) {
    for (int j = i + 1; j < 9; ++j) {
      if (sum - v[i] - v[j] == 100) {
        a = i, b = j;
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
    cin >> tmp;
    sum += tmp;
    v.push_back(tmp);
  }

  solve();
  for (int i = 0; i < 9; ++i) {
    if (i == a || i == b) continue;
    out.push_back(v[i]);
  }
  sort(out.begin(), out.end());
  for (int i : out) cout << i << " ";
  return 0;
}