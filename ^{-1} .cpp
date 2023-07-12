#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, p;
  cin >> n >> x;
  int i;
  int count = 0;

  for (i = 0; i < n; i++) {
    cin >> p;
    count++;
    if (p == x) {
      break;
    }
  }

  cout << count << endl;
}
