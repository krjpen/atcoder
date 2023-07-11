#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  string t;
  cin >> n;
  cin >> s;
  cin >> t;

  int i;
  bool x = true;

  for (i = 0; i < n; i++) {
    if (s.at(i) == t.at(i)) {
      x = true;
    } else if (s.at(i) == '1' && t.at(i) == 'l' ||
               s.at(i) == 'l' && t.at(i) == '1') {
      x = true;
    } else if (s.at(i) == '0' && t.at(i) == 'o' ||
               s.at(i) == 'o' && t.at(i) == '0') {
      x = true;
    } else {
      x = false;
      break;
    }
  }
  if (x == true) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
