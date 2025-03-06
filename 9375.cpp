#include <bits/stdc++.h>
using namespace std;

int testCase;
int N;
string name, type;
vector<vector<pair<string, string>>> cont;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> testCase >> N;
  cont.reserve(testCase);
  for (int i = 0; i < testCase; ++i) {
    for (int j = 0; j < N; ++j) {
      cin >> name >> type;
      cont[testCase].push_back({name, type});
    }
  }

  cout << "hello";
  return 0;
}
