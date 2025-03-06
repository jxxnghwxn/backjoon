#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int cnt[200], a;
char b;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> s1;
  for (char a : s1) {
    cnt[(int)a]++;
  }
  for (char i = 'Z'; i >= 'A'; --i) {
    if (cnt[(int)i]) {
      if (cnt[(int)i] % 2 == 1) {
        a++;
        b = i;
        cnt[(int)i]--;
      }
      if (a == 2) break;
      for (int j = 0; j < cnt[(int)i]; j += 2) {
        s2 = i + s2; // 기존 문자 앞에 삽입
        s2 = s2 + i; // 기준 문자 뒤에 삽입
      }
    }
  }

  if (b) {
    s2.insert(s2.begin() + s2.size() / 2, b);
  }
  if (a == 2) {
    cout << "I'm Sorry Hansoo";
  }
  else cout << s2;

  return 0;
}
