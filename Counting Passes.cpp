#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l, a;
  cin >> n >> l;
  int counter = 0;

  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a >= l) counter++;
  }

  cout << counter;
}
