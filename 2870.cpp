#include <bits/stdc++.h>
using namespace std;

int N;
string s, t;
vector<string> ve;
char prevChar;

bool cmp(const string& s1, const string& s2) {
  if (s1.size() == s2.size()) {
    return s1 < s2;
  }
  else {
    return s1.size() < s2.size();
  }
}

void solve() {
  while (true) {
    if (t.size() && t.front() == '0') {
      t.erase(t.begin());
    }
    else break;
  }
  if (t.size() == 0) {
    t = "0";
  }
  ve.push_back(t);
  t = "";
}

int main() {
  cin >> N;
  while (N--) {
    t = "";
    cin >> s;
    for (auto it : s) {
      // 숫자인 경우
      if (isdigit(it)) {
        t += it;
      }
      // 문자인 경우
      else if (t.size()) {
        solve();
      }
    }
    if (t.size()) {
      solve();
    }
  }

  sort(ve.begin(), ve.end(), cmp);

  for (auto& it : ve) {
    cout << it << "\n";
  }

  return 0;
}
