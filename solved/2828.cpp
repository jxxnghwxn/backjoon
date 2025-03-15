#include <bits/stdc++.h>
using namespace std;

int n, m, j, ret;
int l, r, tmp;

int main() {
  cin >> n >> m >> j;
  l = 1;
  for (int i = 0; i < j; i++) {
    r = l + m - 1;
    cin >> tmp;
    if (tmp >= l && tmp <= r) continue;
    if (tmp < l) {
      ret += (l - tmp); // 순서 중요, l 변경하기 전에 거리 수정해야 함
      l -= (l - tmp);
    }
    else {
      ret += (tmp - r);
      l += (tmp - r);
    }
  }


  cout << ret;
  return 0;
}
