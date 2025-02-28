#include <bits/stdc++.h>
using namespace std;

string dopa = "abcde";
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  // q1
  string out = dopa.substr(0, 3);
  cout << out << "\n";

  // q2 문자열 거꾸로
  reverse(out.begin(), out.end());
  cout << out << "\n";

  // q3
  out += "umzunsik";
  cout << out << "\n";
  return 0;
}
