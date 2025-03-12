#include <bits/stdc++.h>
using namespace std;
#define y1 aaaa

int M, N, K;
int ar[101][101], visited[101][101];
int x1, y1, x2, y2;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

vector<int> ret;

int dfs(int y, int x) {
  visited[y][x] = 1;
  int ext = 1;
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
    if (!ar[ny][nx] && !visited[ny][nx]) {
      ext += dfs(ny, nx);
    }
  }
  return ext;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> M >> N >> K;
  for (int i = 0; i < K; ++i) {
    cin >> x1 >> y1 >> x2 >> y2;
    for (int x = x1; x < x2; x++) {
      for (int y = y1; y < y2; y++) {
        ar[y][x] = 1;
      }
    }
  }
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if (!ar[i][j] && !visited[i][j]) {
        ret.push_back(dfs(i, j));
      }
    }
  }
  sort(ret.begin(), ret.end());
  cout << ret.size() << "\n";
  for (auto idx : ret) {
    cout << idx << " ";
  }

  return 0;
}
