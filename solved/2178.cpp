#include <bits/stdc++.h>
using namespace std;

int n, m;
int x, y;
vector<vector<int>> maze(0);
vector<vector<bool>> visited(0);
queue<pair<int, int>> q;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
  cin >> n >> m;
  maze.resize(n);

  for (int i = 0; i < n; ++i) {
    string str;
    cin >> str;
    for (int j = 0; j < m; ++j) {
      maze[i].push_back(str[j] - '0');
    }
  }

  visited.resize(n, vector<bool>(m));

  q.push({0, 0});
  visited[0][0] = true;
  while (!q.empty()) {
    tie(x, y) = q.front();

    q.pop();

    for (int i = 0; i < 4; ++i) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if (maze[nx][ny] == 0) continue;
      if (visited[nx][ny] == true) continue;

      if (maze[nx][ny] >= 1) {
        maze[nx][ny] = maze[x][y] + 1;
        q.push({nx, ny});
        visited[nx][ny] = true;
      }
    }
  }

  cout << maze[n - 1][m - 1];
}