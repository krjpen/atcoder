#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, i;
  cin >> n;
  int count = 0;
  
  for (i = 0; i < n; i++) {
    cin >> a;
    count += a;
  }

  cout << count << endl;
}
