#include <bits/stdc++.h>
using namespace std;

int h, w;
string s;

int ar[101][101];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> h >> w;
  for (int i = 0; i < h; i++) {
    cin >> s;
    int tmp = -1;
    bool isC = 0;
    for (int j = 0; j < w; j++) {
      if (s[j] == 'c') {
        tmp = 0;
        isC = 1;
      }
      ar[i][j] = tmp;
      if (isC) {
        tmp++;
      }
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cout << ar[i][j] << " ";
    }
    cout << "\n";
  }


  return 0;
}
