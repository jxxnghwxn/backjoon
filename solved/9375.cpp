#include <bits/stdc++.h>
using namespace std;

int T;
int N;
string name, type;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> T;
  for (int i = 0; i < T; ++i) {
    cin >> N;
    map<string, int> mp;
    for (int j = 0; j < N; ++j) {
      cin >> name >> type;
      mp[type]++;
    }
    long long ret = 1;
    for (auto it : mp) {
      ret *= (static_cast<long long>(it.second) + 1);
    }
    ret--;
    cout << ret << "\n";
  }


  return 0;
}


