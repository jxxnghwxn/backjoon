#include <bits/stdc++.h>
using namespace std;

int n, k;
int deg[100010];
int tmp, sum;
int ret = INT_MIN;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  // psum 누적합
  cin >> n >> k;
  for (int i = 1; i <= n; ++i) {
    cin >> tmp;
    deg[i] = deg[i - 1] + tmp;
  }
  for (int i = k; i <= n; ++i) {
    ret = max(ret, deg[i] - deg[i - k]);
  }

  cout << ret;
  return 0;
}
