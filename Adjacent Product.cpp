#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[999];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n-1; i++)
    cout << a[i] * a[i+1] << " ";
}
