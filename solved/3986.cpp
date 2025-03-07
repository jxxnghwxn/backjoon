#include <bits/stdc++.h>
using namespace std;

int N, cnt;
vector<string> ve;
string s;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> N;
  ve.resize(N);
  for (int i = 0; i < N; ++i) {
    cin >> ve[i];
  }

  for (int i = 0; i < N; ++i) {
    s = ve[i];
    stack<char> stk;
    for (char c : s) {
      if (stk.size() && stk.top() == c) {
        stk.pop();
      }
      else {
        stk.push(c);
      }
    }
    if (stk.size() == 0) {
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}
