#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == '|') {
      count++;
    }
    if (count == 1 && s[i] == '*') {
      cout << "in";
      return 0;
    }
  }
  cout << "out";
}
