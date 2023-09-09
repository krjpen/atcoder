#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  bool a = false;
  bool b = false;
  bool c = false;

  cin >> n;
  cin >> s;
  for (int i = 0; i < n; i++) {
    if (s.at(i) == 'A') {
      a = true;
    }
    if (s.at(i) == 'B') {
      b = true;
    }
    if (s.at(i) == 'C') {
      c = true;
    }
    if (a == true && b == true && c == true) {
      cout << i+1 << endl;
      break;
    }
  }
}
