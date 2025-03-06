#include <bits/stdc++.h>
using namespace std;

int N, M;
string s;
map<string, int> mp;
map<int, string> mp2;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> M;
  for (int i = 0; i < N; ++i) {
    cin >> s;
    mp[s] = i + 1;
    mp2[i + 1] = s;
  }

  for (int i = 0; i < M; ++i) {
    cin >> s;
    if (atoi(s.c_str())) {
      cout << mp2[atoi(s.c_str())] << "\n";
    } else {
      cout << mp[s] << "\n";
    }
  }
  return 0;
}
