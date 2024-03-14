#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, D, y, m, d;
  cin >> M >> D >> y >> m >> d;

  if (d == D) {
    if (m == M) {
      y += 1;
      m = 1;
      d = 1;
    } else {
      m += 1;
      d = 1;
    }
  } else {
    d += 1;
  }

  cout << y << " " << m << " " << d << endl;
}
