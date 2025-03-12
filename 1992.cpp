#include <bits/stdc++.h>
using namespace std;

int N;
char ar[66][66];
string s;
string ret = "";

void quad(int y, int x, int quad_size) {
  if (quad_size == 1) {
    ret += string(1, ar[y][x]);
    return;
  }
  int half = quad_size / 2;
  char cmp = ar[y][x];

  for (int i = y; i < y + quad_size; i++) {
    for (int j = x; j < x + quad_size; j++) {
      if (cmp != ar[i][j]) {
        ret += '(';
        quad(y, x, half);
        quad(y, x + half, half);
        quad(y + half, x, half);
        quad(y + half, x + half, half);
        ret += ')';
        // 다를때
        return;
      }
    }
  }
  // 같을때
  ret += string(1, ar[y][x]);
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> s;
    for (int j = 0; j < s.size(); j++) {
      ar[i][j] = s[j];
    }
  }

  quad(0, 0, N);
  cout << ret;

  return 0;
}
