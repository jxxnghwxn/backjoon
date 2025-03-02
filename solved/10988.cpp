
#include <bits/stdc++.h>
using namespace std;

string s, Rstr;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> s;
  Rstr = s;
  reverse(Rstr.begin(), Rstr.end());

  if (Rstr == s) {
    cout << 1;
  } else {
    cout << 0;
  }

  return 0;
}
