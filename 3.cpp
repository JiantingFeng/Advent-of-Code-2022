#include <bits/stdc++.h>

using namespace std;

int score(char ch) {
  if (ch >= 'a' and ch <= 'z')
    return ch - 'a' + 1;
  return ch - 'A' + 27;
}

int solve1(string &s) {
  int n = s.size();
  int cnt1[60] = {0}, cnt2[60] = {0};
  for (int i = 0; i < n / 2; i++)
    cnt1[score(s[i])]++;
  for (int i = n / 2; i < n; i++)
    cnt2[score(s[i])]++;
  for (int i = 1; i <= 52; i++)
    if (cnt1[i] > 0 and cnt2[i] > 0)
      return i;
}

int solve2(string &s1, string &s2, string &s3) {
  int cnt1[60] = {0}, cnt2[60] = {0}, cnt3[60] = {0};
  for (char ch : s1)
    cnt1[score(ch)]++;
  for (char ch : s2)
    cnt2[score(ch)]++;
  for (char ch : s3)
    cnt3[score(ch)]++;
  for (int i = 1; i <= 52; i++)
    if (cnt1[i] > 0 and cnt2[i] > 0 and cnt3[i] > 0)
      return i;
}

int main() {
  ifstream file("3.in");
  string line;
  int res1 = 0, res2 = 0;
  string s1, s2, s3;
  int cnt = 0;
  while (getline(file, line)) {
    // cout << line << endl;
    res1 += solve1(line);
    while (cnt < 3) {
      if (cnt == 0)
        s1 = line;
      else if (cnt == 1)
        s2 = line;
      else
        s3 = line;
      cnt++;
      if (cnt == 3)
        cnt = 0;
      break;
    }
    if (cnt == 0)
      res2 += solve2(s1, s2, s3);
  }
  cout << res1 << endl;
  cout << res2 << endl;
  return 0;
}
