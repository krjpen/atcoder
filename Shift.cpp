#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, a;
  cin >> n >> k;
  vector<int> vec;

  for (int i = 0; i < n; i++) {
    cin >> a;
    vec.push_back(a);
  }

  for (int i = 0; i < k; i++) {
    vec.erase(vec.begin());
    vec.push_back(0);
  }

  for (int i = 0; i < n; i++) {
    cout << vec.at(i) << " ";
  }
}
