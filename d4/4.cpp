#include <bits/stdc++.h>

using namespace std;

int main() {
  int x1, x2, y1, y2;
  int res1 = 0, res2 = 0;
  string line;
  while (getline(cin, line)) {
    stringstream ss(line);
    ss >> x1 >> y1 >> x2 >> y2;
    if ((x1 <= x2 && y1 >= y2) || (x1 >= x2 && y1 <= y2)) {
      res1++;
    }
    if ((x2 >= x1 && x2 <= y1) || (x1 >= x2 && x1 <= y2)) {
      res2++;
    }
  }
  cout << res1 << endl;
  cout << res2 << endl;
  return 0;
}
