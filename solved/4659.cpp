#include <bits/stdc++.h>
using namespace std;

string s;
bool include_vowel;
int cnt_constant, cnt_vowel;
char prevChar;
bool isPossible;

int main() {
  while (true) {
    cin >> s;
    if (s == "end") break;

    include_vowel = false;
    cnt_constant = 0, cnt_vowel = 0;
    prevChar = ' ';
    isPossible = true;

    for (int i = 0; i < s.size(); i++) {
      // 1조건
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
        include_vowel = true;
        cnt_vowel++;
        cnt_constant = 0;
      }
      else {
        cnt_vowel = 0;
        cnt_constant++;
      }
      // 2조건 && 3조건
      if (i >= 1 && (prevChar == s[i]) && (s[i] != 'e' && s[i] != 'o')) {
        isPossible = false;
      }
      if (cnt_constant == 3 || cnt_vowel == 3) {
        isPossible = false;
      }
      prevChar = s[i];
    }
    if (include_vowel && isPossible) {
      cout << "<" << s << ">" << " is acceptable.\n";
    }
    else {
      cout << "<" << s << ">" << " is not acceptable.\n";
    }
  }


  return 0;
}
