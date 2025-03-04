#include <bits/stdc++.h>
using namespace std;

int n;
string str, pat, pre, suf;
vector<string> param;

int main() {
  cin >> n;
  cin >> pat;

  int pos = pat.find('*');
  pre = pat.substr(0, pos);
  suf = pat.substr(pos + 1);

  for (int i = 0; i < n; ++i) {
    cin >> str;
    param.push_back(str);
  }

  for (int i = 0; i < n; ++i) {
    str = param[i];
    if (pre.size() + suf.size() > str.size()) {
      cout << "NE\n";
    } else if (pre == str.substr(0, pre.size()) &&
               suf == str.substr(str.size() - suf.size())) {
      cout << "DA\n";
    } else {
      cout << "NE\n";
    }
  }

  return 0;
}
