#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, h, x;
  int p;
  vector<int> k;
  int i;

  cin >> n >> h >> x;

  for (i = 0; i < n; i++) {
    cin >> p;
    k.push_back(p);
  }

  for (i = 0; i < n; i++) {
    if (x - h <= k[i]) {
      cout << i+1 << endl;
      break;
    }
  }
}
