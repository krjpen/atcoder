#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  int i, j;
  string s;
  int count = 0;

  for (i = 0; i < h; i++) {
    cin >> s;
    for (j = 0; j < w; j++) {
      if (s.at(j) == '#') {
        count++;
      }
    }
  }

  cout << count << endl;
}
