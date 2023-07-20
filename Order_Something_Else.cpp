#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, q;
  int i;
  int d;
  int k;
  vector<int> vec;

  cin >> n >> p >> q;
  for (i = 0; i < n; i++) {
    cin >> d;
    vec.push_back(d);
  }

  if (vec.size() == 1) {
    k = vec.at(0);
  } else {
    for (i = 0; i < n - 1; i++) {
      if (i == 0) {
        k = min(vec.at(i + 1), vec.at(i));
      } else {
        k = min(k, vec.at(i + 1));
      }
    }
  }
  
  if (k + q < p) {
    cout << k + q << endl;
  } else {
    cout << p << endl;
  }
}
