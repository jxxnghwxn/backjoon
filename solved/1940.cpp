#include <bits/stdc++.h>
using namespace std;

int N, M, cnt;
vector<int> ve;


// // 재귀
// void combi(int idx, vector<int>& v) {
//   if (v.size() == 2) {
//     int a = ve[v[0]];
//     int b = ve[v[1]];
//     if (a + b == M) {
//       cnt++;
//       return;
//     }
//   }
//   for (int i = idx + 1; i < N; i++) {
//     v.push_back(i);
//     combi(i, v);
//     v.pop_back();
//   }
// }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> N >> M;
  ve.resize(N);
  for (int i = 0; i < N; i++) {
    cin >> ve[i];
  }

  // for 문
  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      if (ve[i] + ve[j] == M) {
        cnt++;
      }
    }
  }

  // // 재귀
  // vector<int> v;
  // combi(-1, v);

  cout << cnt << '\n';
  return 0;
}
