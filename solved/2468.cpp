#include <bits/stdc++.h>
using namespace std;

int N, ret, cnt;
int ar[101][101], visited[101][101];

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x, int d) {
  visited[y][x] = 1;
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny < 0 || nx < 0 || ny >= N || nx >= N) continue;
    if (!visited[ny][nx] && ar[ny][nx] > d)
      dfs(ny, nx, d);
  }
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> N;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> ar[i][j];
    }
  }

  for (int d = 0; d < 101; d++) {
    fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
    cnt = 0;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (ar[i][j] > d && !visited[i][j]) {
          dfs(i, j, d);
          cnt++;
        }
      }
    }
    ret = max(cnt, ret);
  }
  cout << ret << "\n";

  return 0;
}
