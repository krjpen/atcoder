#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, h;
  cin >> n;
  int i;
  vector<int> vec;
  int count;
  int k;

  for (i = 0; i < n; i++) {
    cin >> h;
    vec.push_back(h);
  }

  k = *max_element(vec.begin(), vec.end());

  for (i = 0; i < n; i++) {
    if (vec.at(i) == k) {
      count = i + 1;
    }
  }

  cout << count << endl;
}
