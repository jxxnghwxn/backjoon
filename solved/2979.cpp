#include <bits/stdc++.h>
using namespace std;

// int a, b, c, cost;
// int cnt;
// int ti[3][2];

int a, b, c, ret;
int cnt[100];
int inTime, outTime;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> a >> b >> c;
  for (int i = 0; i < 3; ++i) {
    cin >> inTime >> outTime;
    for (int j = inTime; j < outTime; ++j) {
      cnt[j]++;
    }
  }

  for (int j = 1; j < 100; ++j) {
    if (cnt[j]) {
      if (cnt[j] == 1) {
        ret += a;
      } else if (cnt[j] == 2) {
        ret += b * 2;
      } else if (cnt[j] == 3) {
        ret += c * 3;
      }
    }
  }

  cout << ret;
  // cin >> a >> b >> c;
  // for (int i = 0; i < 3; ++i) {
  //   for (int j = 0; j < 2; ++j) {
  //     cin >> ti[i][j];
  //
  //   }
  // }

  // for (int i = 1; i < 100; ++i) {
  //   for (int j = 0; j < 3; ++j) {
  //     if (i >= ti[j][0] && i < ti[j][1]) {
  //       cnt++;
  //     }
  //   }
  //   switch (cnt) {
  //     case 1:
  //       cost += a * 1;
  //       break;
  //     case 2:
  //       cost += b * 2;
  //       break;
  //     case 3:
  //       cost += c * 3;
  //       break;
  //     default:
  //       break;
  //   }
  //   cnt = 0;
  // }
  // cout << cost;
  return 0;
}
