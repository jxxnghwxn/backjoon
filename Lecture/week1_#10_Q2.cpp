#include <bits/stdc++.h>
using namespace std;

string dopa = "abcde";
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, temp;
  double out = 0;
  vector<int> v;

  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> temp;
    out += temp;
    v.push_back(temp);
  }

  sort(v.begin(), v.end());

  // return
  for (int i : v) cout << i << " ";
  cout << "\n";

  cout << fixed << setprecision(2) << out / n << "\n";
  return 0;
}
