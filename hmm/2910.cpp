#include <bits/stdc++.h>
using namespace std;

int n, c, tmp;
map<int, int> cnt;
map<int, int> order;
vector<int> ve;

bool cmp(int a, int b) {
  if (cnt[a] == cnt[b]) {
    return order[a] < order[b];
  }
  return cnt[a] > cnt[b];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> c;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    cnt[tmp]++;
    if (order[tmp] == 0) {
      order[tmp] = i + 1;
    }
    ve.push_back(tmp);
  }
  sort(ve.begin(), ve.end(), cmp);

  for (int it : ve) {
    cout << it << " ";
  }

  return 0;
}
