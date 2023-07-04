#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  vector<string> vec(n+1);

  for (int i = 1; i <= n; i++) {
    cin >> s;
    vec.at(i) = s;
  }

  for (int i = 1; i <= n; i++) {
    cout << vec.at(n + 1 - i) << endl;
  }
}
