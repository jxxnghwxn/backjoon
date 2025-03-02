#include <bits/stdc++.h>
using namespace std;

string s;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  getline(cin, s);
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = (s[i] - 'A' + 13) % 26 + 'A';
    }
    if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] = (s[i] - 'a' + 13) % 26 + 'a';
    }
    cout << s[i];
  }

  return 0;
}
