#include <bits/stdc++.h>
using namespace std;

int sum(int a) {
  if (a == 0) {
    return 1;
  }

  int s = sum(a - 1);
  return s * a;
}

int main() {
  int n, i;
  cin >> n;
  cout << sum(n) << endl;
}
