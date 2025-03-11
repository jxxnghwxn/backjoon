#include <bits/stdc++.h>
using namespace std;

int T, M, N, K, x, y, ret, nx, ny;
bool ar[55][55];
bool visited[55][55];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x) {
  visited[y][x] = 1;
  for (int i = 0; i < 4; i++) {
    ny = y + dy[i];
    nx = x + dx[i];
    if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
    if (!visited[ny][nx] && ar[ny][nx]) {
      dfs(ny, nx);
    }
  }
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> T;
  while (T--) {
    cin >> M >> N >> K;
    fill(&ar[0][0], &ar[0][0] + 55 * 55, 0);
    fill(&visited[0][0], &visited[0][0] + 55 * 55, 0);
    ret = 0;
    for (int i = 0; i < K; i++) {
      cin >> x >> y;
      ar[y][x] = 1;
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        if (ar[i][j] && !visited[i][j]) {
          dfs(i, j);
          ret++;
        }
      }
    }
    cout << ret << "\n";
  }


  return 0;
}
