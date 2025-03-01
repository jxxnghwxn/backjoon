#include <bits/stdc++.h>
using namespace std;

int a, b, c, cost;
int minT = 100, maxT = 1, cnt;
int ti[3][2];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> a >> b >> c;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 2; ++j) {
      cin >> ti[i][j];
      minT = min(minT, ti[i][j]);
      maxT = max(maxT, ti[i][j]);
    }
  }

  for (int i = minT; i < maxT; ++i) {
    for (int j = 0; j < 3; ++j) {
      if (i >= ti[j][0] && i < ti[j][1]) {
        cnt++;
      }
    }
    switch (cnt) {
      case 1:
        cost += a * 1;
        break;
      case 2:
        cost += b * 2;
        break;
      case 3:
        cost += c * 3;
        break;
      default:
        break;
    }
    cnt = 0;
  }
  cout << cost;
  return 0;
}
