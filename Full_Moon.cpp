#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, p;
  int k;

  cin >> n >> m >> p;

  if (n - m > 0) {
    k = (n - m) / p;
    cout << k + 1 << endl;
  } else if (n - m == 0) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
}
