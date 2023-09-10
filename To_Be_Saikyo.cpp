#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p;
  int i;
  vector<int> a;
  int k = 0;
  bool x = false;
  
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> p;
    a.push_back(p);
  }

  int max = *max_element(a.begin(), a.end());

  if (a[0] != max) {
    while (a[0] <= max) {
      k++;
      a[0]++;
    }
  }

  for (i = 1; i < n; i++) {
    if (a[0] == max && a[i] == max){
      k++;
      break;
    }
  }
  
  cout << k << endl;
}
