#include <bits/stdc++.h>

using namespace std;

int main() {
  string line;
  int sum = 0;
  vector<int> v;
  while (getline(cin, line)) {
    stringstream ss(line);
    if (line.size() == 0) {
      v.push_back(sum);
      sum = 0;
    } else {
      sum += atoi(line.c_str());
    }
  }
  sort(v.begin(), v.end(), greater<int>());
  cout << v[0] << endl;
  cout << v[0] + v[1] + v[2] << endl;
  return 0;
}
