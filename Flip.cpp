#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '0') {
      S.at(i) = '1';
    } else {
      S.at(i) = '0';
    }
  }

  cout << S << endl;
}
